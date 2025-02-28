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
    AWS_MEDIACONVERT_API ProbeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Probe"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The list of input media files to be probed.
     */
    inline const Aws::Vector<ProbeInputFile>& GetInputFiles() const{ return m_inputFiles; }
    inline bool InputFilesHasBeenSet() const { return m_inputFilesHasBeenSet; }
    inline void SetInputFiles(const Aws::Vector<ProbeInputFile>& value) { m_inputFilesHasBeenSet = true; m_inputFiles = value; }
    inline void SetInputFiles(Aws::Vector<ProbeInputFile>&& value) { m_inputFilesHasBeenSet = true; m_inputFiles = std::move(value); }
    inline ProbeRequest& WithInputFiles(const Aws::Vector<ProbeInputFile>& value) { SetInputFiles(value); return *this;}
    inline ProbeRequest& WithInputFiles(Aws::Vector<ProbeInputFile>&& value) { SetInputFiles(std::move(value)); return *this;}
    inline ProbeRequest& AddInputFiles(const ProbeInputFile& value) { m_inputFilesHasBeenSet = true; m_inputFiles.push_back(value); return *this; }
    inline ProbeRequest& AddInputFiles(ProbeInputFile&& value) { m_inputFilesHasBeenSet = true; m_inputFiles.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ProbeInputFile> m_inputFiles;
    bool m_inputFilesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
