/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class DisassociateDRTLogBucketRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API DisassociateDRTLogBucketRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateDRTLogBucket"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon S3 bucket that contains the logs that you want to share.</p>
     */
    inline const Aws::String& GetLogBucket() const { return m_logBucket; }
    inline bool LogBucketHasBeenSet() const { return m_logBucketHasBeenSet; }
    template<typename LogBucketT = Aws::String>
    void SetLogBucket(LogBucketT&& value) { m_logBucketHasBeenSet = true; m_logBucket = std::forward<LogBucketT>(value); }
    template<typename LogBucketT = Aws::String>
    DisassociateDRTLogBucketRequest& WithLogBucket(LogBucketT&& value) { SetLogBucket(std::forward<LogBucketT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logBucket;
    bool m_logBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
