/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/KnowledgeBaseAssociationData.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The data that is output as a result of the assistant
   * association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/AssistantAssociationOutputData">AWS
   * API Reference</a></p>
   */
  class AssistantAssociationOutputData
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API AssistantAssociationOutputData();
    AWS_CONNECTWISDOMSERVICE_API AssistantAssociationOutputData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API AssistantAssociationOutputData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The knowledge base where output data is sent.</p>
     */
    inline const KnowledgeBaseAssociationData& GetKnowledgeBaseAssociation() const{ return m_knowledgeBaseAssociation; }

    /**
     * <p>The knowledge base where output data is sent.</p>
     */
    inline bool KnowledgeBaseAssociationHasBeenSet() const { return m_knowledgeBaseAssociationHasBeenSet; }

    /**
     * <p>The knowledge base where output data is sent.</p>
     */
    inline void SetKnowledgeBaseAssociation(const KnowledgeBaseAssociationData& value) { m_knowledgeBaseAssociationHasBeenSet = true; m_knowledgeBaseAssociation = value; }

    /**
     * <p>The knowledge base where output data is sent.</p>
     */
    inline void SetKnowledgeBaseAssociation(KnowledgeBaseAssociationData&& value) { m_knowledgeBaseAssociationHasBeenSet = true; m_knowledgeBaseAssociation = std::move(value); }

    /**
     * <p>The knowledge base where output data is sent.</p>
     */
    inline AssistantAssociationOutputData& WithKnowledgeBaseAssociation(const KnowledgeBaseAssociationData& value) { SetKnowledgeBaseAssociation(value); return *this;}

    /**
     * <p>The knowledge base where output data is sent.</p>
     */
    inline AssistantAssociationOutputData& WithKnowledgeBaseAssociation(KnowledgeBaseAssociationData&& value) { SetKnowledgeBaseAssociation(std::move(value)); return *this;}

  private:

    KnowledgeBaseAssociationData m_knowledgeBaseAssociation;
    bool m_knowledgeBaseAssociationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
