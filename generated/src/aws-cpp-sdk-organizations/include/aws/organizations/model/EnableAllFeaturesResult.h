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
  class EnableAllFeaturesResult
  {
  public:
    AWS_ORGANIZATIONS_API EnableAllFeaturesResult();
    AWS_ORGANIZATIONS_API EnableAllFeaturesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API EnableAllFeaturesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains details about the handshake created to support this
     * request to enable all features in the organization.</p>
     */
    inline const Handshake& GetHandshake() const{ return m_handshake; }

    /**
     * <p>A structure that contains details about the handshake created to support this
     * request to enable all features in the organization.</p>
     */
    inline void SetHandshake(const Handshake& value) { m_handshake = value; }

    /**
     * <p>A structure that contains details about the handshake created to support this
     * request to enable all features in the organization.</p>
     */
    inline void SetHandshake(Handshake&& value) { m_handshake = std::move(value); }

    /**
     * <p>A structure that contains details about the handshake created to support this
     * request to enable all features in the organization.</p>
     */
    inline EnableAllFeaturesResult& WithHandshake(const Handshake& value) { SetHandshake(value); return *this;}

    /**
     * <p>A structure that contains details about the handshake created to support this
     * request to enable all features in the organization.</p>
     */
    inline EnableAllFeaturesResult& WithHandshake(Handshake&& value) { SetHandshake(std::move(value)); return *this;}

  private:

    Handshake m_handshake;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
