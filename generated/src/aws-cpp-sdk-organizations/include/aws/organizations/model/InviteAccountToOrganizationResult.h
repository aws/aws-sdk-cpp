/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Handshake.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{
  class InviteAccountToOrganizationResult
  {
  public:
    AWS_ORGANIZATIONS_API InviteAccountToOrganizationResult();
    AWS_ORGANIZATIONS_API InviteAccountToOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API InviteAccountToOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains details about the handshake that is created to
     * support this invitation request.</p>
     */
    inline const Handshake& GetHandshake() const{ return m_handshake; }

    /**
     * <p>A structure that contains details about the handshake that is created to
     * support this invitation request.</p>
     */
    inline void SetHandshake(const Handshake& value) { m_handshake = value; }

    /**
     * <p>A structure that contains details about the handshake that is created to
     * support this invitation request.</p>
     */
    inline void SetHandshake(Handshake&& value) { m_handshake = std::move(value); }

    /**
     * <p>A structure that contains details about the handshake that is created to
     * support this invitation request.</p>
     */
    inline InviteAccountToOrganizationResult& WithHandshake(const Handshake& value) { SetHandshake(value); return *this;}

    /**
     * <p>A structure that contains details about the handshake that is created to
     * support this invitation request.</p>
     */
    inline InviteAccountToOrganizationResult& WithHandshake(Handshake&& value) { SetHandshake(std::move(value)); return *this;}

  private:

    Handshake m_handshake;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
