/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateParallelDataResult
  {
  public:
    AWS_TRANSLATE_API UpdateParallelDataResult();
    AWS_TRANSLATE_API UpdateParallelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API UpdateParallelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline UpdateParallelDataResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline UpdateParallelDataResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline UpdateParallelDataResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the parallel data resource that you are attempting to update.
     * Your update request is accepted only if this status is either
     * <code>ACTIVE</code> or <code>FAILED</code>.</p>
     */
    inline const ParallelDataStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the parallel data resource that you are attempting to update.
     * Your update request is accepted only if this status is either
     * <code>ACTIVE</code> or <code>FAILED</code>.</p>
     */
    inline void SetStatus(const ParallelDataStatus& value) { m_status = value; }

    /**
     * <p>The status of the parallel data resource that you are attempting to update.
     * Your update request is accepted only if this status is either
     * <code>ACTIVE</code> or <code>FAILED</code>.</p>
     */
    inline void SetStatus(ParallelDataStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the parallel data resource that you are attempting to update.
     * Your update request is accepted only if this status is either
     * <code>ACTIVE</code> or <code>FAILED</code>.</p>
     */
    inline UpdateParallelDataResult& WithStatus(const ParallelDataStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the parallel data resource that you are attempting to update.
     * Your update request is accepted only if this status is either
     * <code>ACTIVE</code> or <code>FAILED</code>.</p>
     */
    inline UpdateParallelDataResult& WithStatus(ParallelDataStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status of the parallel data update attempt. When the updated parallel
     * data resource is ready for you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline const ParallelDataStatus& GetLatestUpdateAttemptStatus() const{ return m_latestUpdateAttemptStatus; }

    /**
     * <p>The status of the parallel data update attempt. When the updated parallel
     * data resource is ready for you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline void SetLatestUpdateAttemptStatus(const ParallelDataStatus& value) { m_latestUpdateAttemptStatus = value; }

    /**
     * <p>The status of the parallel data update attempt. When the updated parallel
     * data resource is ready for you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline void SetLatestUpdateAttemptStatus(ParallelDataStatus&& value) { m_latestUpdateAttemptStatus = std::move(value); }

    /**
     * <p>The status of the parallel data update attempt. When the updated parallel
     * data resource is ready for you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline UpdateParallelDataResult& WithLatestUpdateAttemptStatus(const ParallelDataStatus& value) { SetLatestUpdateAttemptStatus(value); return *this;}

    /**
     * <p>The status of the parallel data update attempt. When the updated parallel
     * data resource is ready for you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline UpdateParallelDataResult& WithLatestUpdateAttemptStatus(ParallelDataStatus&& value) { SetLatestUpdateAttemptStatus(std::move(value)); return *this;}


    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestUpdateAttemptAt() const{ return m_latestUpdateAttemptAt; }

    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline void SetLatestUpdateAttemptAt(const Aws::Utils::DateTime& value) { m_latestUpdateAttemptAt = value; }

    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline void SetLatestUpdateAttemptAt(Aws::Utils::DateTime&& value) { m_latestUpdateAttemptAt = std::move(value); }

    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline UpdateParallelDataResult& WithLatestUpdateAttemptAt(const Aws::Utils::DateTime& value) { SetLatestUpdateAttemptAt(value); return *this;}

    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline UpdateParallelDataResult& WithLatestUpdateAttemptAt(Aws::Utils::DateTime&& value) { SetLatestUpdateAttemptAt(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    ParallelDataStatus m_status;

    ParallelDataStatus m_latestUpdateAttemptStatus;

    Aws::Utils::DateTime m_latestUpdateAttemptAt;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
