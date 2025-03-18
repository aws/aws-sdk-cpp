/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{
  class UpdateOpsMetadataResult
  {
  public:
    AWS_SSM_API UpdateOpsMetadataResult() = default;
    AWS_SSM_API UpdateOpsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdateOpsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object that was
     * updated.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const { return m_opsMetadataArn; }
    template<typename OpsMetadataArnT = Aws::String>
    void SetOpsMetadataArn(OpsMetadataArnT&& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = std::forward<OpsMetadataArnT>(value); }
    template<typename OpsMetadataArnT = Aws::String>
    UpdateOpsMetadataResult& WithOpsMetadataArn(OpsMetadataArnT&& value) { SetOpsMetadataArn(std::forward<OpsMetadataArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateOpsMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_opsMetadataArn;
    bool m_opsMetadataArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
