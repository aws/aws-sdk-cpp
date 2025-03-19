/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ProvisioningArtifactPreferences.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactParameter.h>
#include <aws/servicecatalog/model/ConstraintSummary.h>
#include <aws/servicecatalog/model/UsageInstruction.h>
#include <aws/servicecatalog/model/TagOptionSummary.h>
#include <aws/servicecatalog/model/ProvisioningArtifactOutput.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DescribeProvisioningParametersResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProvisioningParametersResult() = default;
    AWS_SERVICECATALOG_API DescribeProvisioningParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProvisioningParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the parameters used to provision the product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactParameter>& GetProvisioningArtifactParameters() const { return m_provisioningArtifactParameters; }
    template<typename ProvisioningArtifactParametersT = Aws::Vector<ProvisioningArtifactParameter>>
    void SetProvisioningArtifactParameters(ProvisioningArtifactParametersT&& value) { m_provisioningArtifactParametersHasBeenSet = true; m_provisioningArtifactParameters = std::forward<ProvisioningArtifactParametersT>(value); }
    template<typename ProvisioningArtifactParametersT = Aws::Vector<ProvisioningArtifactParameter>>
    DescribeProvisioningParametersResult& WithProvisioningArtifactParameters(ProvisioningArtifactParametersT&& value) { SetProvisioningArtifactParameters(std::forward<ProvisioningArtifactParametersT>(value)); return *this;}
    template<typename ProvisioningArtifactParametersT = ProvisioningArtifactParameter>
    DescribeProvisioningParametersResult& AddProvisioningArtifactParameters(ProvisioningArtifactParametersT&& value) { m_provisioningArtifactParametersHasBeenSet = true; m_provisioningArtifactParameters.emplace_back(std::forward<ProvisioningArtifactParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the constraints used to provision the product.</p>
     */
    inline const Aws::Vector<ConstraintSummary>& GetConstraintSummaries() const { return m_constraintSummaries; }
    template<typename ConstraintSummariesT = Aws::Vector<ConstraintSummary>>
    void SetConstraintSummaries(ConstraintSummariesT&& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries = std::forward<ConstraintSummariesT>(value); }
    template<typename ConstraintSummariesT = Aws::Vector<ConstraintSummary>>
    DescribeProvisioningParametersResult& WithConstraintSummaries(ConstraintSummariesT&& value) { SetConstraintSummaries(std::forward<ConstraintSummariesT>(value)); return *this;}
    template<typename ConstraintSummariesT = ConstraintSummary>
    DescribeProvisioningParametersResult& AddConstraintSummaries(ConstraintSummariesT&& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries.emplace_back(std::forward<ConstraintSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any additional metadata specifically related to the provisioning of the
     * product. For example, see the <code>Version</code> field of the CloudFormation
     * template.</p>
     */
    inline const Aws::Vector<UsageInstruction>& GetUsageInstructions() const { return m_usageInstructions; }
    template<typename UsageInstructionsT = Aws::Vector<UsageInstruction>>
    void SetUsageInstructions(UsageInstructionsT&& value) { m_usageInstructionsHasBeenSet = true; m_usageInstructions = std::forward<UsageInstructionsT>(value); }
    template<typename UsageInstructionsT = Aws::Vector<UsageInstruction>>
    DescribeProvisioningParametersResult& WithUsageInstructions(UsageInstructionsT&& value) { SetUsageInstructions(std::forward<UsageInstructionsT>(value)); return *this;}
    template<typename UsageInstructionsT = UsageInstruction>
    DescribeProvisioningParametersResult& AddUsageInstructions(UsageInstructionsT&& value) { m_usageInstructionsHasBeenSet = true; m_usageInstructions.emplace_back(std::forward<UsageInstructionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the TagOptions associated with the resource.</p>
     */
    inline const Aws::Vector<TagOptionSummary>& GetTagOptions() const { return m_tagOptions; }
    template<typename TagOptionsT = Aws::Vector<TagOptionSummary>>
    void SetTagOptions(TagOptionsT&& value) { m_tagOptionsHasBeenSet = true; m_tagOptions = std::forward<TagOptionsT>(value); }
    template<typename TagOptionsT = Aws::Vector<TagOptionSummary>>
    DescribeProvisioningParametersResult& WithTagOptions(TagOptionsT&& value) { SetTagOptions(std::forward<TagOptionsT>(value)); return *this;}
    template<typename TagOptionsT = TagOptionSummary>
    DescribeProvisioningParametersResult& AddTagOptions(TagOptionsT&& value) { m_tagOptionsHasBeenSet = true; m_tagOptions.emplace_back(std::forward<TagOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains information about preferences, such as Regions and
     * accounts, for the provisioning artifact.</p>
     */
    inline const ProvisioningArtifactPreferences& GetProvisioningArtifactPreferences() const { return m_provisioningArtifactPreferences; }
    template<typename ProvisioningArtifactPreferencesT = ProvisioningArtifactPreferences>
    void SetProvisioningArtifactPreferences(ProvisioningArtifactPreferencesT&& value) { m_provisioningArtifactPreferencesHasBeenSet = true; m_provisioningArtifactPreferences = std::forward<ProvisioningArtifactPreferencesT>(value); }
    template<typename ProvisioningArtifactPreferencesT = ProvisioningArtifactPreferences>
    DescribeProvisioningParametersResult& WithProvisioningArtifactPreferences(ProvisioningArtifactPreferencesT&& value) { SetProvisioningArtifactPreferences(std::forward<ProvisioningArtifactPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the keys and descriptions of the outputs. These outputs can be
     * referenced from a provisioned product launched from this provisioning
     * artifact.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactOutput>& GetProvisioningArtifactOutputKeys() const { return m_provisioningArtifactOutputKeys; }
    template<typename ProvisioningArtifactOutputKeysT = Aws::Vector<ProvisioningArtifactOutput>>
    void SetProvisioningArtifactOutputKeys(ProvisioningArtifactOutputKeysT&& value) { m_provisioningArtifactOutputKeysHasBeenSet = true; m_provisioningArtifactOutputKeys = std::forward<ProvisioningArtifactOutputKeysT>(value); }
    template<typename ProvisioningArtifactOutputKeysT = Aws::Vector<ProvisioningArtifactOutput>>
    DescribeProvisioningParametersResult& WithProvisioningArtifactOutputKeys(ProvisioningArtifactOutputKeysT&& value) { SetProvisioningArtifactOutputKeys(std::forward<ProvisioningArtifactOutputKeysT>(value)); return *this;}
    template<typename ProvisioningArtifactOutputKeysT = ProvisioningArtifactOutput>
    DescribeProvisioningParametersResult& AddProvisioningArtifactOutputKeys(ProvisioningArtifactOutputKeysT&& value) { m_provisioningArtifactOutputKeysHasBeenSet = true; m_provisioningArtifactOutputKeys.emplace_back(std::forward<ProvisioningArtifactOutputKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProvisioningParametersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisioningArtifactParameter> m_provisioningArtifactParameters;
    bool m_provisioningArtifactParametersHasBeenSet = false;

    Aws::Vector<ConstraintSummary> m_constraintSummaries;
    bool m_constraintSummariesHasBeenSet = false;

    Aws::Vector<UsageInstruction> m_usageInstructions;
    bool m_usageInstructionsHasBeenSet = false;

    Aws::Vector<TagOptionSummary> m_tagOptions;
    bool m_tagOptionsHasBeenSet = false;

    ProvisioningArtifactPreferences m_provisioningArtifactPreferences;
    bool m_provisioningArtifactPreferencesHasBeenSet = false;

    Aws::Vector<ProvisioningArtifactOutput> m_provisioningArtifactOutputKeys;
    bool m_provisioningArtifactOutputKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
