/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{
  class UpdateStateMachineResult
  {
  public:
    AWS_SFN_API UpdateStateMachineResult();
    AWS_SFN_API UpdateStateMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API UpdateStateMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDate = value; }

    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDate = std::move(value); }

    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline UpdateStateMachineResult& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline UpdateStateMachineResult& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_updateDate;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
