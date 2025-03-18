/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53profiles/model/ProfileResourceAssociation.h>
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
namespace Route53Profiles
{
namespace Model
{
  class ListProfileResourceAssociationsResult
  {
  public:
    AWS_ROUTE53PROFILES_API ListProfileResourceAssociationsResult() = default;
    AWS_ROUTE53PROFILES_API ListProfileResourceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API ListProfileResourceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another
     * <code>ListProfileResourceAssociations</code> request to get the next group of
     * results. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProfileResourceAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the profile resource association that you specified in a
     * <code>GetProfileResourceAssociation</code> request. </p>
     */
    inline const Aws::Vector<ProfileResourceAssociation>& GetProfileResourceAssociations() const { return m_profileResourceAssociations; }
    template<typename ProfileResourceAssociationsT = Aws::Vector<ProfileResourceAssociation>>
    void SetProfileResourceAssociations(ProfileResourceAssociationsT&& value) { m_profileResourceAssociationsHasBeenSet = true; m_profileResourceAssociations = std::forward<ProfileResourceAssociationsT>(value); }
    template<typename ProfileResourceAssociationsT = Aws::Vector<ProfileResourceAssociation>>
    ListProfileResourceAssociationsResult& WithProfileResourceAssociations(ProfileResourceAssociationsT&& value) { SetProfileResourceAssociations(std::forward<ProfileResourceAssociationsT>(value)); return *this;}
    template<typename ProfileResourceAssociationsT = ProfileResourceAssociation>
    ListProfileResourceAssociationsResult& AddProfileResourceAssociations(ProfileResourceAssociationsT&& value) { m_profileResourceAssociationsHasBeenSet = true; m_profileResourceAssociations.emplace_back(std::forward<ProfileResourceAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProfileResourceAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ProfileResourceAssociation> m_profileResourceAssociations;
    bool m_profileResourceAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
