/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/RuleAction.h>
#include <aws/vpc-lattice/model/ListenerProtocol.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class CreateListenerRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API CreateListenerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateListener"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline CreateListenerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline CreateListenerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline CreateListenerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The action for the default rule. Each listener has a default rule. Each rule
     * consists of a priority, one or more actions, and one or more conditions. The
     * default rule is the rule that's used if no other rules match. Each rule must
     * include exactly one of the following types of actions: <code>forward </code>or
     * <code>fixed-response</code>, and it must be the last action to be performed.
     * </p>
     */
    inline const RuleAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action for the default rule. Each listener has a default rule. Each rule
     * consists of a priority, one or more actions, and one or more conditions. The
     * default rule is the rule that's used if no other rules match. Each rule must
     * include exactly one of the following types of actions: <code>forward </code>or
     * <code>fixed-response</code>, and it must be the last action to be performed.
     * </p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>The action for the default rule. Each listener has a default rule. Each rule
     * consists of a priority, one or more actions, and one or more conditions. The
     * default rule is the rule that's used if no other rules match. Each rule must
     * include exactly one of the following types of actions: <code>forward </code>or
     * <code>fixed-response</code>, and it must be the last action to be performed.
     * </p>
     */
    inline void SetDefaultAction(const RuleAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action for the default rule. Each listener has a default rule. Each rule
     * consists of a priority, one or more actions, and one or more conditions. The
     * default rule is the rule that's used if no other rules match. Each rule must
     * include exactly one of the following types of actions: <code>forward </code>or
     * <code>fixed-response</code>, and it must be the last action to be performed.
     * </p>
     */
    inline void SetDefaultAction(RuleAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>The action for the default rule. Each listener has a default rule. Each rule
     * consists of a priority, one or more actions, and one or more conditions. The
     * default rule is the rule that's used if no other rules match. Each rule must
     * include exactly one of the following types of actions: <code>forward </code>or
     * <code>fixed-response</code>, and it must be the last action to be performed.
     * </p>
     */
    inline CreateListenerRequest& WithDefaultAction(const RuleAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action for the default rule. Each listener has a default rule. Each rule
     * consists of a priority, one or more actions, and one or more conditions. The
     * default rule is the rule that's used if no other rules match. Each rule must
     * include exactly one of the following types of actions: <code>forward </code>or
     * <code>fixed-response</code>, and it must be the last action to be performed.
     * </p>
     */
    inline CreateListenerRequest& WithDefaultAction(RuleAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>The name of the listener. A listener name must be unique within a service.
     * The valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as
     * the first or last character, or immediately after another hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the listener. A listener name must be unique within a service.
     * The valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as
     * the first or last character, or immediately after another hyphen.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the listener. A listener name must be unique within a service.
     * The valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as
     * the first or last character, or immediately after another hyphen.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the listener. A listener name must be unique within a service.
     * The valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as
     * the first or last character, or immediately after another hyphen.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the listener. A listener name must be unique within a service.
     * The valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as
     * the first or last character, or immediately after another hyphen.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the listener. A listener name must be unique within a service.
     * The valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as
     * the first or last character, or immediately after another hyphen.</p>
     */
    inline CreateListenerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the listener. A listener name must be unique within a service.
     * The valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as
     * the first or last character, or immediately after another hyphen.</p>
     */
    inline CreateListenerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the listener. A listener name must be unique within a service.
     * The valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as
     * the first or last character, or immediately after another hyphen.</p>
     */
    inline CreateListenerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The listener port. You can specify a value from <code>1</code> to
     * <code>65535</code>. For HTTP, the default is <code>80</code>. For HTTPS, the
     * default is <code>443</code>.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The listener port. You can specify a value from <code>1</code> to
     * <code>65535</code>. For HTTP, the default is <code>80</code>. For HTTPS, the
     * default is <code>443</code>.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The listener port. You can specify a value from <code>1</code> to
     * <code>65535</code>. For HTTP, the default is <code>80</code>. For HTTPS, the
     * default is <code>443</code>.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The listener port. You can specify a value from <code>1</code> to
     * <code>65535</code>. For HTTP, the default is <code>80</code>. For HTTPS, the
     * default is <code>443</code>.</p>
     */
    inline CreateListenerRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The listener protocol HTTP or HTTPS.</p>
     */
    inline const ListenerProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The listener protocol HTTP or HTTPS.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The listener protocol HTTP or HTTPS.</p>
     */
    inline void SetProtocol(const ListenerProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The listener protocol HTTP or HTTPS.</p>
     */
    inline void SetProtocol(ListenerProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The listener protocol HTTP or HTTPS.</p>
     */
    inline CreateListenerRequest& WithProtocol(const ListenerProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The listener protocol HTTP or HTTPS.</p>
     */
    inline CreateListenerRequest& WithProtocol(ListenerProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetServiceIdentifier() const{ return m_serviceIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline bool ServiceIdentifierHasBeenSet() const { return m_serviceIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceIdentifier(const Aws::String& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceIdentifier(Aws::String&& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceIdentifier(const char* value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline CreateListenerRequest& WithServiceIdentifier(const Aws::String& value) { SetServiceIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline CreateListenerRequest& WithServiceIdentifier(Aws::String&& value) { SetServiceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline CreateListenerRequest& WithServiceIdentifier(const char* value) { SetServiceIdentifier(value); return *this;}


    /**
     * <p>The tags for the listener.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the listener.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the listener.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the listener.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the listener.</p>
     */
    inline CreateListenerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the listener.</p>
     */
    inline CreateListenerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the listener.</p>
     */
    inline CreateListenerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the listener.</p>
     */
    inline CreateListenerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the listener.</p>
     */
    inline CreateListenerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the listener.</p>
     */
    inline CreateListenerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the listener.</p>
     */
    inline CreateListenerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the listener.</p>
     */
    inline CreateListenerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the listener.</p>
     */
    inline CreateListenerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    RuleAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    ListenerProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
