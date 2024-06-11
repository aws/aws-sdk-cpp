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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The template alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateAlias">AWS
   * API Reference</a></p>
   */
  class TemplateAlias
  {
  public:
    AWS_QUICKSIGHT_API TemplateAlias();
    AWS_QUICKSIGHT_API TemplateAlias(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TemplateAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display name of the template alias.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }
    inline TemplateAlias& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline TemplateAlias& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline TemplateAlias& WithAliasName(const char* value) { SetAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the template alias.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline TemplateAlias& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline TemplateAlias& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline TemplateAlias& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the template alias.</p>
     */
    inline long long GetTemplateVersionNumber() const{ return m_templateVersionNumber; }
    inline bool TemplateVersionNumberHasBeenSet() const { return m_templateVersionNumberHasBeenSet; }
    inline void SetTemplateVersionNumber(long long value) { m_templateVersionNumberHasBeenSet = true; m_templateVersionNumber = value; }
    inline TemplateAlias& WithTemplateVersionNumber(long long value) { SetTemplateVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_templateVersionNumber;
    bool m_templateVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
