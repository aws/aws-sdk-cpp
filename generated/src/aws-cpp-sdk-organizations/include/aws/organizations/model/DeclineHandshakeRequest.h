/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class DeclineHandshakeRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API DeclineHandshakeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeclineHandshake"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline const Aws::String& GetHandshakeId() const{ return m_handshakeId; }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline bool HandshakeIdHasBeenSet() const { return m_handshakeIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline void SetHandshakeId(const Aws::String& value) { m_handshakeIdHasBeenSet = true; m_handshakeId = value; }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline void SetHandshakeId(Aws::String&& value) { m_handshakeIdHasBeenSet = true; m_handshakeId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline void SetHandshakeId(const char* value) { m_handshakeIdHasBeenSet = true; m_handshakeId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline DeclineHandshakeRequest& WithHandshakeId(const Aws::String& value) { SetHandshakeId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline DeclineHandshakeRequest& WithHandshakeId(Aws::String&& value) { SetHandshakeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline DeclineHandshakeRequest& WithHandshakeId(const char* value) { SetHandshakeId(value); return *this;}

  private:

    Aws::String m_handshakeId;
    bool m_handshakeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
