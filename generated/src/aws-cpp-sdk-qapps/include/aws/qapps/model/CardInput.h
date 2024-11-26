/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/model/TextInputCardInput.h>
#include <aws/qapps/model/QQueryCardInput.h>
#include <aws/qapps/model/QPluginCardInput.h>
#include <aws/qapps/model/FileUploadCardInput.h>
#include <aws/qapps/model/FormInputCardInput.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The properties defining an input card in an Amazon Q App.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/CardInput">AWS API
   * Reference</a></p>
   */
  class CardInput
  {
  public:
    AWS_QAPPS_API CardInput();
    AWS_QAPPS_API CardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API CardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A container for the properties of the text input card.</p>
     */
    inline const TextInputCardInput& GetTextInput() const{ return m_textInput; }
    inline bool TextInputHasBeenSet() const { return m_textInputHasBeenSet; }
    inline void SetTextInput(const TextInputCardInput& value) { m_textInputHasBeenSet = true; m_textInput = value; }
    inline void SetTextInput(TextInputCardInput&& value) { m_textInputHasBeenSet = true; m_textInput = std::move(value); }
    inline CardInput& WithTextInput(const TextInputCardInput& value) { SetTextInput(value); return *this;}
    inline CardInput& WithTextInput(TextInputCardInput&& value) { SetTextInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the query input card.</p>
     */
    inline const QQueryCardInput& GetQQuery() const{ return m_qQuery; }
    inline bool QQueryHasBeenSet() const { return m_qQueryHasBeenSet; }
    inline void SetQQuery(const QQueryCardInput& value) { m_qQueryHasBeenSet = true; m_qQuery = value; }
    inline void SetQQuery(QQueryCardInput&& value) { m_qQueryHasBeenSet = true; m_qQuery = std::move(value); }
    inline CardInput& WithQQuery(const QQueryCardInput& value) { SetQQuery(value); return *this;}
    inline CardInput& WithQQuery(QQueryCardInput&& value) { SetQQuery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the plugin input card.</p>
     */
    inline const QPluginCardInput& GetQPlugin() const{ return m_qPlugin; }
    inline bool QPluginHasBeenSet() const { return m_qPluginHasBeenSet; }
    inline void SetQPlugin(const QPluginCardInput& value) { m_qPluginHasBeenSet = true; m_qPlugin = value; }
    inline void SetQPlugin(QPluginCardInput&& value) { m_qPluginHasBeenSet = true; m_qPlugin = std::move(value); }
    inline CardInput& WithQPlugin(const QPluginCardInput& value) { SetQPlugin(value); return *this;}
    inline CardInput& WithQPlugin(QPluginCardInput&& value) { SetQPlugin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the file upload input card.</p>
     */
    inline const FileUploadCardInput& GetFileUpload() const{ return m_fileUpload; }
    inline bool FileUploadHasBeenSet() const { return m_fileUploadHasBeenSet; }
    inline void SetFileUpload(const FileUploadCardInput& value) { m_fileUploadHasBeenSet = true; m_fileUpload = value; }
    inline void SetFileUpload(FileUploadCardInput&& value) { m_fileUploadHasBeenSet = true; m_fileUpload = std::move(value); }
    inline CardInput& WithFileUpload(const FileUploadCardInput& value) { SetFileUpload(value); return *this;}
    inline CardInput& WithFileUpload(FileUploadCardInput&& value) { SetFileUpload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the form input card.</p>
     */
    inline const FormInputCardInput& GetFormInput() const{ return m_formInput; }
    inline bool FormInputHasBeenSet() const { return m_formInputHasBeenSet; }
    inline void SetFormInput(const FormInputCardInput& value) { m_formInputHasBeenSet = true; m_formInput = value; }
    inline void SetFormInput(FormInputCardInput&& value) { m_formInputHasBeenSet = true; m_formInput = std::move(value); }
    inline CardInput& WithFormInput(const FormInputCardInput& value) { SetFormInput(value); return *this;}
    inline CardInput& WithFormInput(FormInputCardInput&& value) { SetFormInput(std::move(value)); return *this;}
    ///@}
  private:

    TextInputCardInput m_textInput;
    bool m_textInputHasBeenSet = false;

    QQueryCardInput m_qQuery;
    bool m_qQueryHasBeenSet = false;

    QPluginCardInput m_qPlugin;
    bool m_qPluginHasBeenSet = false;

    FileUploadCardInput m_fileUpload;
    bool m_fileUploadHasBeenSet = false;

    FormInputCardInput m_formInput;
    bool m_formInputHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
