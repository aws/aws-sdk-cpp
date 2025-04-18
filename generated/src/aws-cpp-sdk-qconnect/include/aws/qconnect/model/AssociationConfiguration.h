/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIAgentAssociationConfigurationType.h>
#include <aws/qconnect/model/AssociationConfigurationData.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The configuration for an Amazon Q in Connect Assistant
   * Association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssociationConfiguration">AWS
   * API Reference</a></p>
   */
  class AssociationConfiguration
  {
  public:
    AWS_QCONNECT_API AssociationConfiguration() = default;
    AWS_QCONNECT_API AssociationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssociationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the association for this Association Configuration.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    AssociationConfiguration& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the association for this Association Configuration.</p>
     */
    inline AIAgentAssociationConfigurationType GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(AIAgentAssociationConfigurationType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline AssociationConfiguration& WithAssociationType(AIAgentAssociationConfigurationType value) { SetAssociationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data of the configuration for an Amazon Q in Connect Assistant
     * Association.</p>
     */
    inline const AssociationConfigurationData& GetAssociationConfigurationData() const { return m_associationConfigurationData; }
    inline bool AssociationConfigurationDataHasBeenSet() const { return m_associationConfigurationDataHasBeenSet; }
    template<typename AssociationConfigurationDataT = AssociationConfigurationData>
    void SetAssociationConfigurationData(AssociationConfigurationDataT&& value) { m_associationConfigurationDataHasBeenSet = true; m_associationConfigurationData = std::forward<AssociationConfigurationDataT>(value); }
    template<typename AssociationConfigurationDataT = AssociationConfigurationData>
    AssociationConfiguration& WithAssociationConfigurationData(AssociationConfigurationDataT&& value) { SetAssociationConfigurationData(std::forward<AssociationConfigurationDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    AIAgentAssociationConfigurationType m_associationType{AIAgentAssociationConfigurationType::NOT_SET};
    bool m_associationTypeHasBeenSet = false;

    AssociationConfigurationData m_associationConfigurationData;
    bool m_associationConfigurationDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
