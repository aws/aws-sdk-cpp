/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/IntegratingService.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class UpdateIntegrationRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIntegration"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline UpdateIntegrationRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline UpdateIntegrationRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline UpdateIntegrationRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline UpdateIntegrationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline UpdateIntegrationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline UpdateIntegrationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Which integrated service to update.</p>
     */
    inline const IntegratingService& GetIntegratingService() const{ return m_integratingService; }

    /**
     * <p>Which integrated service to update.</p>
     */
    inline bool IntegratingServiceHasBeenSet() const { return m_integratingServiceHasBeenSet; }

    /**
     * <p>Which integrated service to update.</p>
     */
    inline void SetIntegratingService(const IntegratingService& value) { m_integratingServiceHasBeenSet = true; m_integratingService = value; }

    /**
     * <p>Which integrated service to update.</p>
     */
    inline void SetIntegratingService(IntegratingService&& value) { m_integratingServiceHasBeenSet = true; m_integratingService = std::move(value); }

    /**
     * <p>Which integrated service to update.</p>
     */
    inline UpdateIntegrationRequest& WithIntegratingService(const IntegratingService& value) { SetIntegratingService(value); return *this;}

    /**
     * <p>Which integrated service to update.</p>
     */
    inline UpdateIntegrationRequest& WithIntegratingService(IntegratingService&& value) { SetIntegratingService(std::move(value)); return *this;}

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    IntegratingService m_integratingService;
    bool m_integratingServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
