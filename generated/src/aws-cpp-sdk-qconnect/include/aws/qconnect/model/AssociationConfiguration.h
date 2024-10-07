/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AssociationConfigurationData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIAgentAssociationConfigurationType.h>
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
    AWS_QCONNECT_API AssociationConfiguration();
    AWS_QCONNECT_API AssociationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssociationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data of the configuration for an Amazon Q in Connect Assistant
     * Association.</p>
     */
    inline const AssociationConfigurationData& GetAssociationConfigurationData() const{ return m_associationConfigurationData; }
    inline bool AssociationConfigurationDataHasBeenSet() const { return m_associationConfigurationDataHasBeenSet; }
    inline void SetAssociationConfigurationData(const AssociationConfigurationData& value) { m_associationConfigurationDataHasBeenSet = true; m_associationConfigurationData = value; }
    inline void SetAssociationConfigurationData(AssociationConfigurationData&& value) { m_associationConfigurationDataHasBeenSet = true; m_associationConfigurationData = std::move(value); }
    inline AssociationConfiguration& WithAssociationConfigurationData(const AssociationConfigurationData& value) { SetAssociationConfigurationData(value); return *this;}
    inline AssociationConfiguration& WithAssociationConfigurationData(AssociationConfigurationData&& value) { SetAssociationConfigurationData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the association for this Association Configuration.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline AssociationConfiguration& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline AssociationConfiguration& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline AssociationConfiguration& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the association for this Association Configuration.</p>
     */
    inline const AIAgentAssociationConfigurationType& GetAssociationType() const{ return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(const AIAgentAssociationConfigurationType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline void SetAssociationType(AIAgentAssociationConfigurationType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }
    inline AssociationConfiguration& WithAssociationType(const AIAgentAssociationConfigurationType& value) { SetAssociationType(value); return *this;}
    inline AssociationConfiguration& WithAssociationType(AIAgentAssociationConfigurationType&& value) { SetAssociationType(std::move(value)); return *this;}
    ///@}
  private:

    AssociationConfigurationData m_associationConfigurationData;
    bool m_associationConfigurationDataHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    AIAgentAssociationConfigurationType m_associationType;
    bool m_associationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
