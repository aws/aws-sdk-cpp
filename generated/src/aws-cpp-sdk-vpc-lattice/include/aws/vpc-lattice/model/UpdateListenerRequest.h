/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/model/RuleAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class UpdateListenerRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API UpdateListenerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateListener"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The action for the default rule.</p>
     */
    inline const RuleAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The action for the default rule.</p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>The action for the default rule.</p>
     */
    inline void SetDefaultAction(const RuleAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>The action for the default rule.</p>
     */
    inline void SetDefaultAction(RuleAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>The action for the default rule.</p>
     */
    inline UpdateListenerRequest& WithDefaultAction(const RuleAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The action for the default rule.</p>
     */
    inline UpdateListenerRequest& WithDefaultAction(RuleAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerIdentifier() const{ return m_listenerIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline bool ListenerIdentifierHasBeenSet() const { return m_listenerIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerIdentifier(const Aws::String& value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerIdentifier(Aws::String&& value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerIdentifier(const char* value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline UpdateListenerRequest& WithListenerIdentifier(const Aws::String& value) { SetListenerIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline UpdateListenerRequest& WithListenerIdentifier(Aws::String&& value) { SetListenerIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline UpdateListenerRequest& WithListenerIdentifier(const char* value) { SetListenerIdentifier(value); return *this;}


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
    inline UpdateListenerRequest& WithServiceIdentifier(const Aws::String& value) { SetServiceIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline UpdateListenerRequest& WithServiceIdentifier(Aws::String&& value) { SetServiceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline UpdateListenerRequest& WithServiceIdentifier(const char* value) { SetServiceIdentifier(value); return *this;}

  private:

    RuleAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_listenerIdentifier;
    bool m_listenerIdentifierHasBeenSet = false;

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
