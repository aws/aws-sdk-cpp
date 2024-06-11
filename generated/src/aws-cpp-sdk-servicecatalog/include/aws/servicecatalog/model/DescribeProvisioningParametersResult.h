﻿/**
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
    AWS_SERVICECATALOG_API DescribeProvisioningParametersResult();
    AWS_SERVICECATALOG_API DescribeProvisioningParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProvisioningParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the parameters used to provision the product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactParameter>& GetProvisioningArtifactParameters() const{ return m_provisioningArtifactParameters; }
    inline void SetProvisioningArtifactParameters(const Aws::Vector<ProvisioningArtifactParameter>& value) { m_provisioningArtifactParameters = value; }
    inline void SetProvisioningArtifactParameters(Aws::Vector<ProvisioningArtifactParameter>&& value) { m_provisioningArtifactParameters = std::move(value); }
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactParameters(const Aws::Vector<ProvisioningArtifactParameter>& value) { SetProvisioningArtifactParameters(value); return *this;}
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactParameters(Aws::Vector<ProvisioningArtifactParameter>&& value) { SetProvisioningArtifactParameters(std::move(value)); return *this;}
    inline DescribeProvisioningParametersResult& AddProvisioningArtifactParameters(const ProvisioningArtifactParameter& value) { m_provisioningArtifactParameters.push_back(value); return *this; }
    inline DescribeProvisioningParametersResult& AddProvisioningArtifactParameters(ProvisioningArtifactParameter&& value) { m_provisioningArtifactParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the constraints used to provision the product.</p>
     */
    inline const Aws::Vector<ConstraintSummary>& GetConstraintSummaries() const{ return m_constraintSummaries; }
    inline void SetConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { m_constraintSummaries = value; }
    inline void SetConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { m_constraintSummaries = std::move(value); }
    inline DescribeProvisioningParametersResult& WithConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { SetConstraintSummaries(value); return *this;}
    inline DescribeProvisioningParametersResult& WithConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { SetConstraintSummaries(std::move(value)); return *this;}
    inline DescribeProvisioningParametersResult& AddConstraintSummaries(const ConstraintSummary& value) { m_constraintSummaries.push_back(value); return *this; }
    inline DescribeProvisioningParametersResult& AddConstraintSummaries(ConstraintSummary&& value) { m_constraintSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any additional metadata specifically related to the provisioning of the
     * product. For example, see the <code>Version</code> field of the CloudFormation
     * template.</p>
     */
    inline const Aws::Vector<UsageInstruction>& GetUsageInstructions() const{ return m_usageInstructions; }
    inline void SetUsageInstructions(const Aws::Vector<UsageInstruction>& value) { m_usageInstructions = value; }
    inline void SetUsageInstructions(Aws::Vector<UsageInstruction>&& value) { m_usageInstructions = std::move(value); }
    inline DescribeProvisioningParametersResult& WithUsageInstructions(const Aws::Vector<UsageInstruction>& value) { SetUsageInstructions(value); return *this;}
    inline DescribeProvisioningParametersResult& WithUsageInstructions(Aws::Vector<UsageInstruction>&& value) { SetUsageInstructions(std::move(value)); return *this;}
    inline DescribeProvisioningParametersResult& AddUsageInstructions(const UsageInstruction& value) { m_usageInstructions.push_back(value); return *this; }
    inline DescribeProvisioningParametersResult& AddUsageInstructions(UsageInstruction&& value) { m_usageInstructions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the TagOptions associated with the resource.</p>
     */
    inline const Aws::Vector<TagOptionSummary>& GetTagOptions() const{ return m_tagOptions; }
    inline void SetTagOptions(const Aws::Vector<TagOptionSummary>& value) { m_tagOptions = value; }
    inline void SetTagOptions(Aws::Vector<TagOptionSummary>&& value) { m_tagOptions = std::move(value); }
    inline DescribeProvisioningParametersResult& WithTagOptions(const Aws::Vector<TagOptionSummary>& value) { SetTagOptions(value); return *this;}
    inline DescribeProvisioningParametersResult& WithTagOptions(Aws::Vector<TagOptionSummary>&& value) { SetTagOptions(std::move(value)); return *this;}
    inline DescribeProvisioningParametersResult& AddTagOptions(const TagOptionSummary& value) { m_tagOptions.push_back(value); return *this; }
    inline DescribeProvisioningParametersResult& AddTagOptions(TagOptionSummary&& value) { m_tagOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains information about preferences, such as Regions and
     * accounts, for the provisioning artifact.</p>
     */
    inline const ProvisioningArtifactPreferences& GetProvisioningArtifactPreferences() const{ return m_provisioningArtifactPreferences; }
    inline void SetProvisioningArtifactPreferences(const ProvisioningArtifactPreferences& value) { m_provisioningArtifactPreferences = value; }
    inline void SetProvisioningArtifactPreferences(ProvisioningArtifactPreferences&& value) { m_provisioningArtifactPreferences = std::move(value); }
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactPreferences(const ProvisioningArtifactPreferences& value) { SetProvisioningArtifactPreferences(value); return *this;}
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactPreferences(ProvisioningArtifactPreferences&& value) { SetProvisioningArtifactPreferences(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the keys and descriptions of the outputs. These outputs can be
     * referenced from a provisioned product launched from this provisioning
     * artifact.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactOutput>& GetProvisioningArtifactOutputKeys() const{ return m_provisioningArtifactOutputKeys; }
    inline void SetProvisioningArtifactOutputKeys(const Aws::Vector<ProvisioningArtifactOutput>& value) { m_provisioningArtifactOutputKeys = value; }
    inline void SetProvisioningArtifactOutputKeys(Aws::Vector<ProvisioningArtifactOutput>&& value) { m_provisioningArtifactOutputKeys = std::move(value); }
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactOutputKeys(const Aws::Vector<ProvisioningArtifactOutput>& value) { SetProvisioningArtifactOutputKeys(value); return *this;}
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactOutputKeys(Aws::Vector<ProvisioningArtifactOutput>&& value) { SetProvisioningArtifactOutputKeys(std::move(value)); return *this;}
    inline DescribeProvisioningParametersResult& AddProvisioningArtifactOutputKeys(const ProvisioningArtifactOutput& value) { m_provisioningArtifactOutputKeys.push_back(value); return *this; }
    inline DescribeProvisioningParametersResult& AddProvisioningArtifactOutputKeys(ProvisioningArtifactOutput&& value) { m_provisioningArtifactOutputKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProvisioningParametersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProvisioningParametersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProvisioningParametersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisioningArtifactParameter> m_provisioningArtifactParameters;

    Aws::Vector<ConstraintSummary> m_constraintSummaries;

    Aws::Vector<UsageInstruction> m_usageInstructions;

    Aws::Vector<TagOptionSummary> m_tagOptions;

    ProvisioningArtifactPreferences m_provisioningArtifactPreferences;

    Aws::Vector<ProvisioningArtifactOutput> m_provisioningArtifactOutputKeys;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
