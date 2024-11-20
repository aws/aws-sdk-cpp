/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/RedactionPlaceHolderType.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The redaction placeholder that will replace the redacted text in
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/RedactionPlaceHolder">AWS
   * API Reference</a></p>
   */
  class RedactionPlaceHolder
  {
  public:
    AWS_WORKSPACESWEB_API RedactionPlaceHolder();
    AWS_WORKSPACESWEB_API RedactionPlaceHolder(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API RedactionPlaceHolder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The redaction placeholder text that will replace the redacted text in session
     * for the custom text redaction placeholder type.</p>
     */
    inline const Aws::String& GetRedactionPlaceHolderText() const{ return m_redactionPlaceHolderText; }
    inline bool RedactionPlaceHolderTextHasBeenSet() const { return m_redactionPlaceHolderTextHasBeenSet; }
    inline void SetRedactionPlaceHolderText(const Aws::String& value) { m_redactionPlaceHolderTextHasBeenSet = true; m_redactionPlaceHolderText = value; }
    inline void SetRedactionPlaceHolderText(Aws::String&& value) { m_redactionPlaceHolderTextHasBeenSet = true; m_redactionPlaceHolderText = std::move(value); }
    inline void SetRedactionPlaceHolderText(const char* value) { m_redactionPlaceHolderTextHasBeenSet = true; m_redactionPlaceHolderText.assign(value); }
    inline RedactionPlaceHolder& WithRedactionPlaceHolderText(const Aws::String& value) { SetRedactionPlaceHolderText(value); return *this;}
    inline RedactionPlaceHolder& WithRedactionPlaceHolderText(Aws::String&& value) { SetRedactionPlaceHolderText(std::move(value)); return *this;}
    inline RedactionPlaceHolder& WithRedactionPlaceHolderText(const char* value) { SetRedactionPlaceHolderText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redaction placeholder type that will replace the redacted text in
     * session.</p>
     */
    inline const RedactionPlaceHolderType& GetRedactionPlaceHolderType() const{ return m_redactionPlaceHolderType; }
    inline bool RedactionPlaceHolderTypeHasBeenSet() const { return m_redactionPlaceHolderTypeHasBeenSet; }
    inline void SetRedactionPlaceHolderType(const RedactionPlaceHolderType& value) { m_redactionPlaceHolderTypeHasBeenSet = true; m_redactionPlaceHolderType = value; }
    inline void SetRedactionPlaceHolderType(RedactionPlaceHolderType&& value) { m_redactionPlaceHolderTypeHasBeenSet = true; m_redactionPlaceHolderType = std::move(value); }
    inline RedactionPlaceHolder& WithRedactionPlaceHolderType(const RedactionPlaceHolderType& value) { SetRedactionPlaceHolderType(value); return *this;}
    inline RedactionPlaceHolder& WithRedactionPlaceHolderType(RedactionPlaceHolderType&& value) { SetRedactionPlaceHolderType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_redactionPlaceHolderText;
    bool m_redactionPlaceHolderTextHasBeenSet = false;

    RedactionPlaceHolderType m_redactionPlaceHolderType;
    bool m_redactionPlaceHolderTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
