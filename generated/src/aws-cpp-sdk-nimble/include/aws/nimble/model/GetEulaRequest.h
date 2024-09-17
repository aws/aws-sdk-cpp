/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class GetEulaRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API GetEulaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEula"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The EULA ID.</p>
     */
    inline const Aws::String& GetEulaId() const{ return m_eulaId; }
    inline bool EulaIdHasBeenSet() const { return m_eulaIdHasBeenSet; }
    inline void SetEulaId(const Aws::String& value) { m_eulaIdHasBeenSet = true; m_eulaId = value; }
    inline void SetEulaId(Aws::String&& value) { m_eulaIdHasBeenSet = true; m_eulaId = std::move(value); }
    inline void SetEulaId(const char* value) { m_eulaIdHasBeenSet = true; m_eulaId.assign(value); }
    inline GetEulaRequest& WithEulaId(const Aws::String& value) { SetEulaId(value); return *this;}
    inline GetEulaRequest& WithEulaId(Aws::String&& value) { SetEulaId(std::move(value)); return *this;}
    inline GetEulaRequest& WithEulaId(const char* value) { SetEulaId(value); return *this;}
    ///@}
  private:

    Aws::String m_eulaId;
    bool m_eulaIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
