/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ReputationEntity.h>
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
   * <p>A list of reputation entities in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListReputationEntitiesResponse">AWS
   * API Reference</a></p>
   */
  class ListReputationEntitiesResult
  {
  public:
    AWS_SESV2_API ListReputationEntitiesResult() = default;
    AWS_SESV2_API ListReputationEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListReputationEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains information about the reputation entities in your
     * account.</p>
     */
    inline const Aws::Vector<ReputationEntity>& GetReputationEntities() const { return m_reputationEntities; }
    template<typename ReputationEntitiesT = Aws::Vector<ReputationEntity>>
    void SetReputationEntities(ReputationEntitiesT&& value) { m_reputationEntitiesHasBeenSet = true; m_reputationEntities = std::forward<ReputationEntitiesT>(value); }
    template<typename ReputationEntitiesT = Aws::Vector<ReputationEntity>>
    ListReputationEntitiesResult& WithReputationEntities(ReputationEntitiesT&& value) { SetReputationEntities(std::forward<ReputationEntitiesT>(value)); return *this;}
    template<typename ReputationEntitiesT = ReputationEntity>
    ListReputationEntitiesResult& AddReputationEntities(ReputationEntitiesT&& value) { m_reputationEntitiesHasBeenSet = true; m_reputationEntities.emplace_back(std::forward<ReputationEntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional reputation entities to list.
     * To view additional reputation entities, issue another request to
     * <code>ListReputationEntities</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReputationEntitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReputationEntitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReputationEntity> m_reputationEntities;
    bool m_reputationEntitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
