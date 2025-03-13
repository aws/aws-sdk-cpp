/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/KnowledgeBaseAssociationConfigurationData.h>
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
   * <p>A typed union of the data of the configuration for an Amazon Q in Connect
   * Assistant Association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssociationConfigurationData">AWS
   * API Reference</a></p>
   */
  class AssociationConfigurationData
  {
  public:
    AWS_QCONNECT_API AssociationConfigurationData() = default;
    AWS_QCONNECT_API AssociationConfigurationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssociationConfigurationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data of the configuration for a <code>KNOWLEDGE_BASE</code> type Amazon Q
     * in Connect Assistant Association.</p>
     */
    inline const KnowledgeBaseAssociationConfigurationData& GetKnowledgeBaseAssociationConfigurationData() const { return m_knowledgeBaseAssociationConfigurationData; }
    inline bool KnowledgeBaseAssociationConfigurationDataHasBeenSet() const { return m_knowledgeBaseAssociationConfigurationDataHasBeenSet; }
    template<typename KnowledgeBaseAssociationConfigurationDataT = KnowledgeBaseAssociationConfigurationData>
    void SetKnowledgeBaseAssociationConfigurationData(KnowledgeBaseAssociationConfigurationDataT&& value) { m_knowledgeBaseAssociationConfigurationDataHasBeenSet = true; m_knowledgeBaseAssociationConfigurationData = std::forward<KnowledgeBaseAssociationConfigurationDataT>(value); }
    template<typename KnowledgeBaseAssociationConfigurationDataT = KnowledgeBaseAssociationConfigurationData>
    AssociationConfigurationData& WithKnowledgeBaseAssociationConfigurationData(KnowledgeBaseAssociationConfigurationDataT&& value) { SetKnowledgeBaseAssociationConfigurationData(std::forward<KnowledgeBaseAssociationConfigurationDataT>(value)); return *this;}
    ///@}
  private:

    KnowledgeBaseAssociationConfigurationData m_knowledgeBaseAssociationConfigurationData;
    bool m_knowledgeBaseAssociationConfigurationDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
