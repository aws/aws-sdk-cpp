/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/ConfigurationCheckType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/model/ApplicationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SsmSap
{
namespace Model
{

  /**
   * <p>Represents a configuration check definition supported by AWS Systems Manager
   * for SAP.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ConfigurationCheckDefinition">AWS
   * API Reference</a></p>
   */
  class ConfigurationCheckDefinition
  {
  public:
    AWS_SSMSAP_API ConfigurationCheckDefinition() = default;
    AWS_SSMSAP_API ConfigurationCheckDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API ConfigurationCheckDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the configuration check.</p>
     */
    inline ConfigurationCheckType GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(ConfigurationCheckType value) { m_idHasBeenSet = true; m_id = value; }
    inline ConfigurationCheckDefinition& WithId(ConfigurationCheckType value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration check.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfigurationCheckDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of what the configuration check validates.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConfigurationCheckDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of SSMSAP application types that this configuration check can be
     * evaluated against.</p>
     */
    inline const Aws::Vector<ApplicationType>& GetApplicableApplicationTypes() const { return m_applicableApplicationTypes; }
    inline bool ApplicableApplicationTypesHasBeenSet() const { return m_applicableApplicationTypesHasBeenSet; }
    template<typename ApplicableApplicationTypesT = Aws::Vector<ApplicationType>>
    void SetApplicableApplicationTypes(ApplicableApplicationTypesT&& value) { m_applicableApplicationTypesHasBeenSet = true; m_applicableApplicationTypes = std::forward<ApplicableApplicationTypesT>(value); }
    template<typename ApplicableApplicationTypesT = Aws::Vector<ApplicationType>>
    ConfigurationCheckDefinition& WithApplicableApplicationTypes(ApplicableApplicationTypesT&& value) { SetApplicableApplicationTypes(std::forward<ApplicableApplicationTypesT>(value)); return *this;}
    inline ConfigurationCheckDefinition& AddApplicableApplicationTypes(ApplicationType value) { m_applicableApplicationTypesHasBeenSet = true; m_applicableApplicationTypes.push_back(value); return *this; }
    ///@}
  private:

    ConfigurationCheckType m_id{ConfigurationCheckType::NOT_SET};
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ApplicationType> m_applicableApplicationTypes;
    bool m_applicableApplicationTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
