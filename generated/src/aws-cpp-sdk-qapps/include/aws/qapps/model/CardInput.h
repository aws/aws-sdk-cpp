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
    AWS_QAPPS_API CardInput() = default;
    AWS_QAPPS_API CardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API CardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A container for the properties of the text input card.</p>
     */
    inline const TextInputCardInput& GetTextInput() const { return m_textInput; }
    inline bool TextInputHasBeenSet() const { return m_textInputHasBeenSet; }
    template<typename TextInputT = TextInputCardInput>
    void SetTextInput(TextInputT&& value) { m_textInputHasBeenSet = true; m_textInput = std::forward<TextInputT>(value); }
    template<typename TextInputT = TextInputCardInput>
    CardInput& WithTextInput(TextInputT&& value) { SetTextInput(std::forward<TextInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the query input card.</p>
     */
    inline const QQueryCardInput& GetQQuery() const { return m_qQuery; }
    inline bool QQueryHasBeenSet() const { return m_qQueryHasBeenSet; }
    template<typename QQueryT = QQueryCardInput>
    void SetQQuery(QQueryT&& value) { m_qQueryHasBeenSet = true; m_qQuery = std::forward<QQueryT>(value); }
    template<typename QQueryT = QQueryCardInput>
    CardInput& WithQQuery(QQueryT&& value) { SetQQuery(std::forward<QQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the plugin input card.</p>
     */
    inline const QPluginCardInput& GetQPlugin() const { return m_qPlugin; }
    inline bool QPluginHasBeenSet() const { return m_qPluginHasBeenSet; }
    template<typename QPluginT = QPluginCardInput>
    void SetQPlugin(QPluginT&& value) { m_qPluginHasBeenSet = true; m_qPlugin = std::forward<QPluginT>(value); }
    template<typename QPluginT = QPluginCardInput>
    CardInput& WithQPlugin(QPluginT&& value) { SetQPlugin(std::forward<QPluginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the file upload input card.</p>
     */
    inline const FileUploadCardInput& GetFileUpload() const { return m_fileUpload; }
    inline bool FileUploadHasBeenSet() const { return m_fileUploadHasBeenSet; }
    template<typename FileUploadT = FileUploadCardInput>
    void SetFileUpload(FileUploadT&& value) { m_fileUploadHasBeenSet = true; m_fileUpload = std::forward<FileUploadT>(value); }
    template<typename FileUploadT = FileUploadCardInput>
    CardInput& WithFileUpload(FileUploadT&& value) { SetFileUpload(std::forward<FileUploadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the form input card.</p>
     */
    inline const FormInputCardInput& GetFormInput() const { return m_formInput; }
    inline bool FormInputHasBeenSet() const { return m_formInputHasBeenSet; }
    template<typename FormInputT = FormInputCardInput>
    void SetFormInput(FormInputT&& value) { m_formInputHasBeenSet = true; m_formInput = std::forward<FormInputT>(value); }
    template<typename FormInputT = FormInputCardInput>
    CardInput& WithFormInput(FormInputT&& value) { SetFormInput(std::forward<FormInputT>(value)); return *this;}
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
