/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/CapacityTaskFailureType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{

  /**
   * <p>The capacity tasks that failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CapacityTaskFailure">AWS
   * API Reference</a></p>
   */
  class CapacityTaskFailure
  {
  public:
    AWS_OUTPOSTS_API CapacityTaskFailure();
    AWS_OUTPOSTS_API CapacityTaskFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API CapacityTaskFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reason that the specified capacity task failed.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason that the specified capacity task failed.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason that the specified capacity task failed.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason that the specified capacity task failed.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason that the specified capacity task failed.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason that the specified capacity task failed.</p>
     */
    inline CapacityTaskFailure& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason that the specified capacity task failed.</p>
     */
    inline CapacityTaskFailure& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the specified capacity task failed.</p>
     */
    inline CapacityTaskFailure& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The type of failure.</p>
     */
    inline const CapacityTaskFailureType& GetType() const{ return m_type; }

    /**
     * <p>The type of failure.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of failure.</p>
     */
    inline void SetType(const CapacityTaskFailureType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of failure.</p>
     */
    inline void SetType(CapacityTaskFailureType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of failure.</p>
     */
    inline CapacityTaskFailure& WithType(const CapacityTaskFailureType& value) { SetType(value); return *this;}

    /**
     * <p>The type of failure.</p>
     */
    inline CapacityTaskFailure& WithType(CapacityTaskFailureType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    CapacityTaskFailureType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
