/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentAccountConnection.h>
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
  class GetEnvironmentAccountConnectionResult
  {
  public:
    AWS_PROTON_API GetEnvironmentAccountConnectionResult();
    AWS_PROTON_API GetEnvironmentAccountConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetEnvironmentAccountConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the requested environment account connection.</p>
     */
    inline const EnvironmentAccountConnection& GetEnvironmentAccountConnection() const{ return m_environmentAccountConnection; }

    /**
     * <p>The detailed data of the requested environment account connection.</p>
     */
    inline void SetEnvironmentAccountConnection(const EnvironmentAccountConnection& value) { m_environmentAccountConnection = value; }

    /**
     * <p>The detailed data of the requested environment account connection.</p>
     */
    inline void SetEnvironmentAccountConnection(EnvironmentAccountConnection&& value) { m_environmentAccountConnection = std::move(value); }

    /**
     * <p>The detailed data of the requested environment account connection.</p>
     */
    inline GetEnvironmentAccountConnectionResult& WithEnvironmentAccountConnection(const EnvironmentAccountConnection& value) { SetEnvironmentAccountConnection(value); return *this;}

    /**
     * <p>The detailed data of the requested environment account connection.</p>
     */
    inline GetEnvironmentAccountConnectionResult& WithEnvironmentAccountConnection(EnvironmentAccountConnection&& value) { SetEnvironmentAccountConnection(std::move(value)); return *this;}

  private:

    EnvironmentAccountConnection m_environmentAccountConnection;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
