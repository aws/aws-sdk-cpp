/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace tnb
{
namespace Model
{

  /**
   * <p>Provides error information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ErrorInfo">AWS API
   * Reference</a></p>
   */
  class ErrorInfo
  {
  public:
    AWS_TNB_API ErrorInfo();
    AWS_TNB_API ErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error cause.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }

    /**
     * <p>Error cause.</p>
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>Error cause.</p>
     */
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>Error cause.</p>
     */
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>Error cause.</p>
     */
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }

    /**
     * <p>Error cause.</p>
     */
    inline ErrorInfo& WithCause(const Aws::String& value) { SetCause(value); return *this;}

    /**
     * <p>Error cause.</p>
     */
    inline ErrorInfo& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}

    /**
     * <p>Error cause.</p>
     */
    inline ErrorInfo& WithCause(const char* value) { SetCause(value); return *this;}


    /**
     * <p>Error details.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>Error details.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Error details.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Error details.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Error details.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>Error details.</p>
     */
    inline ErrorInfo& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>Error details.</p>
     */
    inline ErrorInfo& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>Error details.</p>
     */
    inline ErrorInfo& WithDetails(const char* value) { SetDetails(value); return *this;}

  private:

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
