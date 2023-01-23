/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class DeleteThemeAliasResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteThemeAliasResult();
    AWS_QUICKSIGHT_API DeleteThemeAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteThemeAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name for the theme alias.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>The name for the theme alias.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasName = value; }

    /**
     * <p>The name for the theme alias.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasName = std::move(value); }

    /**
     * <p>The name for the theme alias.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasName.assign(value); }

    /**
     * <p>The name for the theme alias.</p>
     */
    inline DeleteThemeAliasResult& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>The name for the theme alias.</p>
     */
    inline DeleteThemeAliasResult& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>The name for the theme alias.</p>
     */
    inline DeleteThemeAliasResult& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the theme resource using the deleted
     * alias.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme resource using the deleted
     * alias.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme resource using the deleted
     * alias.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme resource using the deleted
     * alias.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme resource using the deleted
     * alias.</p>
     */
    inline DeleteThemeAliasResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the theme resource using the deleted
     * alias.</p>
     */
    inline DeleteThemeAliasResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the theme resource using the deleted
     * alias.</p>
     */
    inline DeleteThemeAliasResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DeleteThemeAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DeleteThemeAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DeleteThemeAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DeleteThemeAliasResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>An ID for the theme associated with the deletion.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }

    /**
     * <p>An ID for the theme associated with the deletion.</p>
     */
    inline void SetThemeId(const Aws::String& value) { m_themeId = value; }

    /**
     * <p>An ID for the theme associated with the deletion.</p>
     */
    inline void SetThemeId(Aws::String&& value) { m_themeId = std::move(value); }

    /**
     * <p>An ID for the theme associated with the deletion.</p>
     */
    inline void SetThemeId(const char* value) { m_themeId.assign(value); }

    /**
     * <p>An ID for the theme associated with the deletion.</p>
     */
    inline DeleteThemeAliasResult& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}

    /**
     * <p>An ID for the theme associated with the deletion.</p>
     */
    inline DeleteThemeAliasResult& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}

    /**
     * <p>An ID for the theme associated with the deletion.</p>
     */
    inline DeleteThemeAliasResult& WithThemeId(const char* value) { SetThemeId(value); return *this;}

  private:

    Aws::String m_aliasName;

    Aws::String m_arn;

    Aws::String m_requestId;

    int m_status;

    Aws::String m_themeId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
