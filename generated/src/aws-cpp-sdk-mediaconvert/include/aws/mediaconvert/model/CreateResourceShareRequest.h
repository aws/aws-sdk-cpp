/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class CreateResourceShareRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API CreateResourceShareRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceShare"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Specify MediaConvert Job ID or ARN to share
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    CreateResourceShareRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Support case identifier
     */
    inline const Aws::String& GetSupportCaseId() const { return m_supportCaseId; }
    inline bool SupportCaseIdHasBeenSet() const { return m_supportCaseIdHasBeenSet; }
    template<typename SupportCaseIdT = Aws::String>
    void SetSupportCaseId(SupportCaseIdT&& value) { m_supportCaseIdHasBeenSet = true; m_supportCaseId = std::forward<SupportCaseIdT>(value); }
    template<typename SupportCaseIdT = Aws::String>
    CreateResourceShareRequest& WithSupportCaseId(SupportCaseIdT&& value) { SetSupportCaseId(std::forward<SupportCaseIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_supportCaseId;
    bool m_supportCaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
