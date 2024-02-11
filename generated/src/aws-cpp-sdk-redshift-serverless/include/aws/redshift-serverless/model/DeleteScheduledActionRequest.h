/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class DeleteScheduledActionRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API DeleteScheduledActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteScheduledAction"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the scheduled action to delete.</p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of the scheduled action to delete.</p>
     */
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }

    /**
     * <p>The name of the scheduled action to delete.</p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>The name of the scheduled action to delete.</p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }

    /**
     * <p>The name of the scheduled action to delete.</p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }

    /**
     * <p>The name of the scheduled action to delete.</p>
     */
    inline DeleteScheduledActionRequest& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>The name of the scheduled action to delete.</p>
     */
    inline DeleteScheduledActionRequest& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled action to delete.</p>
     */
    inline DeleteScheduledActionRequest& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}

  private:

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
