/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class AcceptEulasRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API AcceptEulasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptEulas"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AcceptEulasRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AcceptEulasRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AcceptEulasRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EULA ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEulaIds() const{ return m_eulaIds; }
    inline bool EulaIdsHasBeenSet() const { return m_eulaIdsHasBeenSet; }
    inline void SetEulaIds(const Aws::Vector<Aws::String>& value) { m_eulaIdsHasBeenSet = true; m_eulaIds = value; }
    inline void SetEulaIds(Aws::Vector<Aws::String>&& value) { m_eulaIdsHasBeenSet = true; m_eulaIds = std::move(value); }
    inline AcceptEulasRequest& WithEulaIds(const Aws::Vector<Aws::String>& value) { SetEulaIds(value); return *this;}
    inline AcceptEulasRequest& WithEulaIds(Aws::Vector<Aws::String>&& value) { SetEulaIds(std::move(value)); return *this;}
    inline AcceptEulasRequest& AddEulaIds(const Aws::String& value) { m_eulaIdsHasBeenSet = true; m_eulaIds.push_back(value); return *this; }
    inline AcceptEulasRequest& AddEulaIds(Aws::String&& value) { m_eulaIdsHasBeenSet = true; m_eulaIds.push_back(std::move(value)); return *this; }
    inline AcceptEulasRequest& AddEulaIds(const char* value) { m_eulaIdsHasBeenSet = true; m_eulaIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The studio ID.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline AcceptEulasRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline AcceptEulasRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline AcceptEulasRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_eulaIds;
    bool m_eulaIdsHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
