/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/ManagedRuleDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class ListManagedInsightRulesResult
  {
  public:
    AWS_CLOUDWATCH_API ListManagedInsightRulesResult() = default;
    AWS_CLOUDWATCH_API ListManagedInsightRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API ListManagedInsightRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> The managed rules that are available for the specified Amazon Web Services
     * resource. </p>
     */
    inline const Aws::Vector<ManagedRuleDescription>& GetManagedRules() const { return m_managedRules; }
    template<typename ManagedRulesT = Aws::Vector<ManagedRuleDescription>>
    void SetManagedRules(ManagedRulesT&& value) { m_managedRulesHasBeenSet = true; m_managedRules = std::forward<ManagedRulesT>(value); }
    template<typename ManagedRulesT = Aws::Vector<ManagedRuleDescription>>
    ListManagedInsightRulesResult& WithManagedRules(ManagedRulesT&& value) { SetManagedRules(std::forward<ManagedRulesT>(value)); return *this;}
    template<typename ManagedRulesT = ManagedRuleDescription>
    ListManagedInsightRulesResult& AddManagedRules(ManagedRulesT&& value) { m_managedRulesHasBeenSet = true; m_managedRules.emplace_back(std::forward<ManagedRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Include this value to get the next set of rules if the value was returned by
     * the previous operation. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListManagedInsightRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListManagedInsightRulesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ManagedRuleDescription> m_managedRules;
    bool m_managedRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
