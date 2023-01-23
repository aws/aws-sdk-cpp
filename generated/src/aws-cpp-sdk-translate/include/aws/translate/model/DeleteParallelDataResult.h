/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataStatus.h>
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
namespace Translate
{
namespace Model
{
  class DeleteParallelDataResult
  {
  public:
    AWS_TRANSLATE_API DeleteParallelDataResult();
    AWS_TRANSLATE_API DeleteParallelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API DeleteParallelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the parallel data resource that is being deleted.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parallel data resource that is being deleted.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the parallel data resource that is being deleted.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the parallel data resource that is being deleted.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the parallel data resource that is being deleted.</p>
     */
    inline DeleteParallelDataResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parallel data resource that is being deleted.</p>
     */
    inline DeleteParallelDataResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parallel data resource that is being deleted.</p>
     */
    inline DeleteParallelDataResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the parallel data deletion.</p>
     */
    inline const ParallelDataStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the parallel data deletion.</p>
     */
    inline void SetStatus(const ParallelDataStatus& value) { m_status = value; }

    /**
     * <p>The status of the parallel data deletion.</p>
     */
    inline void SetStatus(ParallelDataStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the parallel data deletion.</p>
     */
    inline DeleteParallelDataResult& WithStatus(const ParallelDataStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the parallel data deletion.</p>
     */
    inline DeleteParallelDataResult& WithStatus(ParallelDataStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    ParallelDataStatus m_status;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
