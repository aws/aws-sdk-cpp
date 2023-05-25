/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/RuleUpdate.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class BatchUpdateRuleRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API BatchUpdateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateRule"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


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
    inline BatchUpdateRuleRequest& WithListenerIdentifier(const Aws::String& value) { SetListenerIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline BatchUpdateRuleRequest& WithListenerIdentifier(Aws::String&& value) { SetListenerIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline BatchUpdateRuleRequest& WithListenerIdentifier(const char* value) { SetListenerIdentifier(value); return *this;}


    /**
     * <p>The rules for the specified listener.</p>
     */
    inline const Aws::Vector<RuleUpdate>& GetRules() const{ return m_rules; }

    /**
     * <p>The rules for the specified listener.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The rules for the specified listener.</p>
     */
    inline void SetRules(const Aws::Vector<RuleUpdate>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The rules for the specified listener.</p>
     */
    inline void SetRules(Aws::Vector<RuleUpdate>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The rules for the specified listener.</p>
     */
    inline BatchUpdateRuleRequest& WithRules(const Aws::Vector<RuleUpdate>& value) { SetRules(value); return *this;}

    /**
     * <p>The rules for the specified listener.</p>
     */
    inline BatchUpdateRuleRequest& WithRules(Aws::Vector<RuleUpdate>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The rules for the specified listener.</p>
     */
    inline BatchUpdateRuleRequest& AddRules(const RuleUpdate& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The rules for the specified listener.</p>
     */
    inline BatchUpdateRuleRequest& AddRules(RuleUpdate&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


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
    inline BatchUpdateRuleRequest& WithServiceIdentifier(const Aws::String& value) { SetServiceIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline BatchUpdateRuleRequest& WithServiceIdentifier(Aws::String&& value) { SetServiceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline BatchUpdateRuleRequest& WithServiceIdentifier(const char* value) { SetServiceIdentifier(value); return *this;}

  private:

    Aws::String m_listenerIdentifier;
    bool m_listenerIdentifierHasBeenSet = false;

    Aws::Vector<RuleUpdate> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
