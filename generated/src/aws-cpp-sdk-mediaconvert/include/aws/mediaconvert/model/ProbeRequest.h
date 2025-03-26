/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/ProbeInputFile.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class ProbeRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API ProbeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Probe"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Specify a media file to probe.
     */
    inline const Aws::Vector<ProbeInputFile>& GetInputFiles() const { return m_inputFiles; }
    inline bool InputFilesHasBeenSet() const { return m_inputFilesHasBeenSet; }
    template<typename InputFilesT = Aws::Vector<ProbeInputFile>>
    void SetInputFiles(InputFilesT&& value) { m_inputFilesHasBeenSet = true; m_inputFiles = std::forward<InputFilesT>(value); }
    template<typename InputFilesT = Aws::Vector<ProbeInputFile>>
    ProbeRequest& WithInputFiles(InputFilesT&& value) { SetInputFiles(std::forward<InputFilesT>(value)); return *this;}
    template<typename InputFilesT = ProbeInputFile>
    ProbeRequest& AddInputFiles(InputFilesT&& value) { m_inputFilesHasBeenSet = true; m_inputFiles.emplace_back(std::forward<InputFilesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ProbeInputFile> m_inputFiles;
    bool m_inputFilesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
