/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/Repository.h>
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
  class DeleteRepositoryResult
  {
  public:
    AWS_PROTON_API DeleteRepositoryResult();
    AWS_PROTON_API DeleteRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API DeleteRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The deleted repository link's detail data that's returned by Proton.</p>
     */
    inline const Repository& GetRepository() const{ return m_repository; }

    /**
     * <p>The deleted repository link's detail data that's returned by Proton.</p>
     */
    inline void SetRepository(const Repository& value) { m_repository = value; }

    /**
     * <p>The deleted repository link's detail data that's returned by Proton.</p>
     */
    inline void SetRepository(Repository&& value) { m_repository = std::move(value); }

    /**
     * <p>The deleted repository link's detail data that's returned by Proton.</p>
     */
    inline DeleteRepositoryResult& WithRepository(const Repository& value) { SetRepository(value); return *this;}

    /**
     * <p>The deleted repository link's detail data that's returned by Proton.</p>
     */
    inline DeleteRepositoryResult& WithRepository(Repository&& value) { SetRepository(std::move(value)); return *this;}

  private:

    Repository m_repository;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
