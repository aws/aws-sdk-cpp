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
  class GetRecoveryPointRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetRecoveryPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecoveryPoint"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the recovery point to return information for.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const{ return m_recoveryPointId; }

    /**
     * <p>The unique identifier of the recovery point to return information for.</p>
     */
    inline bool RecoveryPointIdHasBeenSet() const { return m_recoveryPointIdHasBeenSet; }

    /**
     * <p>The unique identifier of the recovery point to return information for.</p>
     */
    inline void SetRecoveryPointId(const Aws::String& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = value; }

    /**
     * <p>The unique identifier of the recovery point to return information for.</p>
     */
    inline void SetRecoveryPointId(Aws::String&& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = std::move(value); }

    /**
     * <p>The unique identifier of the recovery point to return information for.</p>
     */
    inline void SetRecoveryPointId(const char* value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId.assign(value); }

    /**
     * <p>The unique identifier of the recovery point to return information for.</p>
     */
    inline GetRecoveryPointRequest& WithRecoveryPointId(const Aws::String& value) { SetRecoveryPointId(value); return *this;}

    /**
     * <p>The unique identifier of the recovery point to return information for.</p>
     */
    inline GetRecoveryPointRequest& WithRecoveryPointId(Aws::String&& value) { SetRecoveryPointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the recovery point to return information for.</p>
     */
    inline GetRecoveryPointRequest& WithRecoveryPointId(const char* value) { SetRecoveryPointId(value); return *this;}

  private:

    Aws::String m_recoveryPointId;
    bool m_recoveryPointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
