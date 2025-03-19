/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Shield
{
namespace Model
{
  class DescribeDRTAccessResult
  {
  public:
    AWS_SHIELD_API DescribeDRTAccessResult() = default;
    AWS_SHIELD_API DescribeDRTAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeDRTAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT used to access your Amazon
     * Web Services account.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeDRTAccessResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon S3 buckets accessed by the SRT.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogBucketList() const { return m_logBucketList; }
    template<typename LogBucketListT = Aws::Vector<Aws::String>>
    void SetLogBucketList(LogBucketListT&& value) { m_logBucketListHasBeenSet = true; m_logBucketList = std::forward<LogBucketListT>(value); }
    template<typename LogBucketListT = Aws::Vector<Aws::String>>
    DescribeDRTAccessResult& WithLogBucketList(LogBucketListT&& value) { SetLogBucketList(std::forward<LogBucketListT>(value)); return *this;}
    template<typename LogBucketListT = Aws::String>
    DescribeDRTAccessResult& AddLogBucketList(LogBucketListT&& value) { m_logBucketListHasBeenSet = true; m_logBucketList.emplace_back(std::forward<LogBucketListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDRTAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_logBucketList;
    bool m_logBucketListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
