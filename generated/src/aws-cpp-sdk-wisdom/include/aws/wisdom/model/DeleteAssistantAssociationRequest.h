/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

  /**
   */
  class DeleteAssistantAssociationRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API DeleteAssistantAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAssistantAssociation"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the assistant association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantAssociationId() const{ return m_assistantAssociationId; }

    /**
     * <p>The identifier of the assistant association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline bool AssistantAssociationIdHasBeenSet() const { return m_assistantAssociationIdHasBeenSet; }

    /**
     * <p>The identifier of the assistant association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline void SetAssistantAssociationId(const Aws::String& value) { m_assistantAssociationIdHasBeenSet = true; m_assistantAssociationId = value; }

    /**
     * <p>The identifier of the assistant association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline void SetAssistantAssociationId(Aws::String&& value) { m_assistantAssociationIdHasBeenSet = true; m_assistantAssociationId = std::move(value); }

    /**
     * <p>The identifier of the assistant association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline void SetAssistantAssociationId(const char* value) { m_assistantAssociationIdHasBeenSet = true; m_assistantAssociationId.assign(value); }

    /**
     * <p>The identifier of the assistant association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline DeleteAssistantAssociationRequest& WithAssistantAssociationId(const Aws::String& value) { SetAssistantAssociationId(value); return *this;}

    /**
     * <p>The identifier of the assistant association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline DeleteAssistantAssociationRequest& WithAssistantAssociationId(Aws::String&& value) { SetAssistantAssociationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the assistant association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline DeleteAssistantAssociationRequest& WithAssistantAssociationId(const char* value) { SetAssistantAssociationId(value); return *this;}


    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline DeleteAssistantAssociationRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline DeleteAssistantAssociationRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline DeleteAssistantAssociationRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}

  private:

    Aws::String m_assistantAssociationId;
    bool m_assistantAssociationIdHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
