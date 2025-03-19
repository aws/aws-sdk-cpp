/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/model/TextInputCard.h>
#include <aws/qapps/model/QQueryCard.h>
#include <aws/qapps/model/QPluginCard.h>
#include <aws/qapps/model/FileUploadCard.h>
#include <aws/qapps/model/FormInputCard.h>
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
   * <p>A card representing a component or step in an Amazon Q App's
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/Card">AWS API
   * Reference</a></p>
   */
  class Card
  {
  public:
    AWS_QAPPS_API Card() = default;
    AWS_QAPPS_API Card(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Card& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A container for the properties of the text input card.</p>
     */
    inline const TextInputCard& GetTextInput() const { return m_textInput; }
    inline bool TextInputHasBeenSet() const { return m_textInputHasBeenSet; }
    template<typename TextInputT = TextInputCard>
    void SetTextInput(TextInputT&& value) { m_textInputHasBeenSet = true; m_textInput = std::forward<TextInputT>(value); }
    template<typename TextInputT = TextInputCard>
    Card& WithTextInput(TextInputT&& value) { SetTextInput(std::forward<TextInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the query card.</p>
     */
    inline const QQueryCard& GetQQuery() const { return m_qQuery; }
    inline bool QQueryHasBeenSet() const { return m_qQueryHasBeenSet; }
    template<typename QQueryT = QQueryCard>
    void SetQQuery(QQueryT&& value) { m_qQueryHasBeenSet = true; m_qQuery = std::forward<QQueryT>(value); }
    template<typename QQueryT = QQueryCard>
    Card& WithQQuery(QQueryT&& value) { SetQQuery(std::forward<QQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the plugin card.</p>
     */
    inline const QPluginCard& GetQPlugin() const { return m_qPlugin; }
    inline bool QPluginHasBeenSet() const { return m_qPluginHasBeenSet; }
    template<typename QPluginT = QPluginCard>
    void SetQPlugin(QPluginT&& value) { m_qPluginHasBeenSet = true; m_qPlugin = std::forward<QPluginT>(value); }
    template<typename QPluginT = QPluginCard>
    Card& WithQPlugin(QPluginT&& value) { SetQPlugin(std::forward<QPluginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the file upload card.</p>
     */
    inline const FileUploadCard& GetFileUpload() const { return m_fileUpload; }
    inline bool FileUploadHasBeenSet() const { return m_fileUploadHasBeenSet; }
    template<typename FileUploadT = FileUploadCard>
    void SetFileUpload(FileUploadT&& value) { m_fileUploadHasBeenSet = true; m_fileUpload = std::forward<FileUploadT>(value); }
    template<typename FileUploadT = FileUploadCard>
    Card& WithFileUpload(FileUploadT&& value) { SetFileUpload(std::forward<FileUploadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the form input card.</p>
     */
    inline const FormInputCard& GetFormInput() const { return m_formInput; }
    inline bool FormInputHasBeenSet() const { return m_formInputHasBeenSet; }
    template<typename FormInputT = FormInputCard>
    void SetFormInput(FormInputT&& value) { m_formInputHasBeenSet = true; m_formInput = std::forward<FormInputT>(value); }
    template<typename FormInputT = FormInputCard>
    Card& WithFormInput(FormInputT&& value) { SetFormInput(std::forward<FormInputT>(value)); return *this;}
    ///@}
  private:

    TextInputCard m_textInput;
    bool m_textInputHasBeenSet = false;

    QQueryCard m_qQuery;
    bool m_qQueryHasBeenSet = false;

    QPluginCard m_qPlugin;
    bool m_qPluginHasBeenSet = false;

    FileUploadCard m_fileUpload;
    bool m_fileUploadHasBeenSet = false;

    FormInputCard m_formInput;
    bool m_formInputHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
