/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class DescribeAttackRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API DescribeAttackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAttack"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) for the attack.</p>
     */
    inline const Aws::String& GetAttackId() const{ return m_attackId; }

    /**
     * <p>The unique identifier (ID) for the attack.</p>
     */
    inline bool AttackIdHasBeenSet() const { return m_attackIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) for the attack.</p>
     */
    inline void SetAttackId(const Aws::String& value) { m_attackIdHasBeenSet = true; m_attackId = value; }

    /**
     * <p>The unique identifier (ID) for the attack.</p>
     */
    inline void SetAttackId(Aws::String&& value) { m_attackIdHasBeenSet = true; m_attackId = std::move(value); }

    /**
     * <p>The unique identifier (ID) for the attack.</p>
     */
    inline void SetAttackId(const char* value) { m_attackIdHasBeenSet = true; m_attackId.assign(value); }

    /**
     * <p>The unique identifier (ID) for the attack.</p>
     */
    inline DescribeAttackRequest& WithAttackId(const Aws::String& value) { SetAttackId(value); return *this;}

    /**
     * <p>The unique identifier (ID) for the attack.</p>
     */
    inline DescribeAttackRequest& WithAttackId(Aws::String&& value) { SetAttackId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) for the attack.</p>
     */
    inline DescribeAttackRequest& WithAttackId(const char* value) { SetAttackId(value); return *this;}

  private:

    Aws::String m_attackId;
    bool m_attackIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
