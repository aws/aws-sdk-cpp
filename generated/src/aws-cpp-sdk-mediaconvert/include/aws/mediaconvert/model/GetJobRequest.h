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
  class GetJobRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API GetJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJob"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    /**
     * the job ID of the job.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * the job ID of the job.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * the job ID of the job.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * the job ID of the job.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * the job ID of the job.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * the job ID of the job.
     */
    inline GetJobRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * the job ID of the job.
     */
    inline GetJobRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * the job ID of the job.
     */
    inline GetJobRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
