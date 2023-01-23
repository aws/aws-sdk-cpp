/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/Service.h>
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
namespace Proton
{
namespace Model
{
  class GetServiceResult
  {
  public:
    AWS_PROTON_API GetServiceResult();
    AWS_PROTON_API GetServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the requested service.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>The detailed data of the requested service.</p>
     */
    inline void SetService(const Service& value) { m_service = value; }

    /**
     * <p>The detailed data of the requested service.</p>
     */
    inline void SetService(Service&& value) { m_service = std::move(value); }

    /**
     * <p>The detailed data of the requested service.</p>
     */
    inline GetServiceResult& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>The detailed data of the requested service.</p>
     */
    inline GetServiceResult& WithService(Service&& value) { SetService(std::move(value)); return *this;}

  private:

    Service m_service;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
