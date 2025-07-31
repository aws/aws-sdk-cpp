/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/ReputationEntity.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about the requested reputation entity.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetReputationEntityResponse">AWS
   * API Reference</a></p>
   */
  class GetReputationEntityResult
  {
  public:
    AWS_SESV2_API GetReputationEntityResult() = default;
    AWS_SESV2_API GetReputationEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetReputationEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The reputation entity information, including status records, policy
     * configuration, and reputation impact.</p>
     */
    inline const ReputationEntity& GetReputationEntity() const { return m_reputationEntity; }
    template<typename ReputationEntityT = ReputationEntity>
    void SetReputationEntity(ReputationEntityT&& value) { m_reputationEntityHasBeenSet = true; m_reputationEntity = std::forward<ReputationEntityT>(value); }
    template<typename ReputationEntityT = ReputationEntity>
    GetReputationEntityResult& WithReputationEntity(ReputationEntityT&& value) { SetReputationEntity(std::forward<ReputationEntityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReputationEntityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReputationEntity m_reputationEntity;
    bool m_reputationEntityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
