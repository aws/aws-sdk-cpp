/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p> The error preventing deletion of the annotation store version.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/VersionDeleteError">AWS
   * API Reference</a></p>
   */
  class VersionDeleteError
  {
  public:
    AWS_OMICS_API VersionDeleteError();
    AWS_OMICS_API VersionDeleteError(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API VersionDeleteError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name given to an annotation store version. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p> The name given to an annotation store version. </p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p> The name given to an annotation store version. </p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p> The name given to an annotation store version. </p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p> The name given to an annotation store version. </p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p> The name given to an annotation store version. </p>
     */
    inline VersionDeleteError& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p> The name given to an annotation store version. </p>
     */
    inline VersionDeleteError& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p> The name given to an annotation store version. </p>
     */
    inline VersionDeleteError& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p> The message explaining the error in annotation store deletion. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> The message explaining the error in annotation store deletion. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> The message explaining the error in annotation store deletion. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> The message explaining the error in annotation store deletion. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> The message explaining the error in annotation store deletion. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> The message explaining the error in annotation store deletion. </p>
     */
    inline VersionDeleteError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> The message explaining the error in annotation store deletion. </p>
     */
    inline VersionDeleteError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> The message explaining the error in annotation store deletion. </p>
     */
    inline VersionDeleteError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
