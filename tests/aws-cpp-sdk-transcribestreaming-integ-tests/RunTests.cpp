/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>
#include <aws/core/internal/AWSHttpResourceClient.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/testing/TestingEnvironment.h>
#include <gtest/gtest.h>

#include <fstream>

void DownloadTestStreams() {
  Aws::SDKOptions options = {};
  options.httpOptions.installSigPipeHandler = true;
  Aws::InitAPI(options);
  {
    Aws::Client::ClientConfigurationInitValues cfgInit;
    cfgInit.shouldDisableIMDS = true;
    Aws::Internal::AWSHttpResourceClient httpclient(cfgInit);
    const Aws::Vector<Aws::String> TEST_FILE_NAMES = {"transcribe-test-file.wav", "this_is_a_cpp_test_sample_8kHz_2162ms.wav",
                                                      "Kant_16kHz_17176ms.wav"};
    for (const auto& toDownload : TEST_FILE_NAMES) {
      Aws::String path = "aws-sdk-cpp-builds-sdks-team/test-resources/" + toDownload;
      auto payload = httpclient.GetResource("https://s3.amazonaws.com/" /*endpoint*/, path.c_str(), "" /*authToken*/);
      Aws::OFStream testFile(toDownload.c_str(), std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
      testFile.write(payload.c_str(), payload.size());
      testFile.close();
    }
  }
  Aws::ShutdownAPI(options);
}

void Cleanup() {
  Aws::SDKOptions options = {};
  options.httpOptions.installSigPipeHandler = true;
  Aws::InitAPI(options);
  {
    const Aws::Vector<Aws::String> TEST_FILE_NAMES = {"transcribe-test-file.wav", "this_is_a_cpp_test_sample_8kHz_2162ms.wav",
                                                      "Kant_16kHz_17176ms.wav"};
    for (const auto& testFilename : TEST_FILE_NAMES) {
      Aws::FileSystem::RemoveFileIfExists(testFilename.c_str());
    }
    Aws::ShutdownAPI(options);
  }
}

int main(int argc, char** argv) {
  Aws::Testing::SetDefaultSigPipeHandler();

  Aws::Testing::ParseArgs(argc, argv);

  ::testing::InitGoogleTest(&argc, argv);
  DownloadTestStreams();
  int exitCode = RUN_ALL_TESTS();
  Cleanup();

  return exitCode;
}
