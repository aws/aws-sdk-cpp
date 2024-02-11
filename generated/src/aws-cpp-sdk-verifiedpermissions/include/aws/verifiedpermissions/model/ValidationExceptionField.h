/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Details about a field that failed policy validation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ValidationExceptionField">AWS
   * API Reference</a></p>
   */
  class ValidationExceptionField
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ValidationExceptionField();
    AWS_VERIFIEDPERMISSIONS_API ValidationExceptionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ValidationExceptionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the specific element that Verified Permissions found to be not
     * valid.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the specific element that Verified Permissions found to be not
     * valid.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the specific element that Verified Permissions found to be not
     * valid.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the specific element that Verified Permissions found to be not
     * valid.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the specific element that Verified Permissions found to be not
     * valid.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the specific element that Verified Permissions found to be not
     * valid.</p>
     */
    inline ValidationExceptionField& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the specific element that Verified Permissions found to be not
     * valid.</p>
     */
    inline ValidationExceptionField& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the specific element that Verified Permissions found to be not
     * valid.</p>
     */
    inline ValidationExceptionField& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Describes the policy validation error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Describes the policy validation error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Describes the policy validation error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Describes the policy validation error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Describes the policy validation error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Describes the policy validation error.</p>
     */
    inline ValidationExceptionField& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Describes the policy validation error.</p>
     */
    inline ValidationExceptionField& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Describes the policy validation error.</p>
     */
    inline ValidationExceptionField& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
