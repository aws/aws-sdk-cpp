/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The data that is input into Wisdom as a result of the assistant
   * association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/AssistantAssociationInputData">AWS
   * API Reference</a></p>
   */
  class AssistantAssociationInputData
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API AssistantAssociationInputData();
    AWS_CONNECTWISDOMSERVICE_API AssistantAssociationInputData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API AssistantAssociationInputData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline AssistantAssociationInputData& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline AssistantAssociationInputData& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline AssistantAssociationInputData& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
