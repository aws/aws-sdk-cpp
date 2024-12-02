/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
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
  class GetRuleRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API GetRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRule"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the listener.</p>
     */
    inline const Aws::String& GetListenerIdentifier() const{ return m_listenerIdentifier; }
    inline bool ListenerIdentifierHasBeenSet() const { return m_listenerIdentifierHasBeenSet; }
    inline void SetListenerIdentifier(const Aws::String& value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier = value; }
    inline void SetListenerIdentifier(Aws::String&& value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier = std::move(value); }
    inline void SetListenerIdentifier(const char* value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier.assign(value); }
    inline GetRuleRequest& WithListenerIdentifier(const Aws::String& value) { SetListenerIdentifier(value); return *this;}
    inline GetRuleRequest& WithListenerIdentifier(Aws::String&& value) { SetListenerIdentifier(std::move(value)); return *this;}
    inline GetRuleRequest& WithListenerIdentifier(const char* value) { SetListenerIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the listener rule.</p>
     */
    inline const Aws::String& GetRuleIdentifier() const{ return m_ruleIdentifier; }
    inline bool RuleIdentifierHasBeenSet() const { return m_ruleIdentifierHasBeenSet; }
    inline void SetRuleIdentifier(const Aws::String& value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier = value; }
    inline void SetRuleIdentifier(Aws::String&& value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier = std::move(value); }
    inline void SetRuleIdentifier(const char* value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier.assign(value); }
    inline GetRuleRequest& WithRuleIdentifier(const Aws::String& value) { SetRuleIdentifier(value); return *this;}
    inline GetRuleRequest& WithRuleIdentifier(Aws::String&& value) { SetRuleIdentifier(std::move(value)); return *this;}
    inline GetRuleRequest& WithRuleIdentifier(const char* value) { SetRuleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the service.</p>
     */
    inline const Aws::String& GetServiceIdentifier() const{ return m_serviceIdentifier; }
    inline bool ServiceIdentifierHasBeenSet() const { return m_serviceIdentifierHasBeenSet; }
    inline void SetServiceIdentifier(const Aws::String& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = value; }
    inline void SetServiceIdentifier(Aws::String&& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = std::move(value); }
    inline void SetServiceIdentifier(const char* value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier.assign(value); }
    inline GetRuleRequest& WithServiceIdentifier(const Aws::String& value) { SetServiceIdentifier(value); return *this;}
    inline GetRuleRequest& WithServiceIdentifier(Aws::String&& value) { SetServiceIdentifier(std::move(value)); return *this;}
    inline GetRuleRequest& WithServiceIdentifier(const char* value) { SetServiceIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_listenerIdentifier;
    bool m_listenerIdentifierHasBeenSet = false;

    Aws::String m_ruleIdentifier;
    bool m_ruleIdentifierHasBeenSet = false;

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
