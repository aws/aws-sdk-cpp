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
    AWS_QAPPS_API Card();
    AWS_QAPPS_API Card(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Card& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A container for the properties of the text input card.</p>
     */
    inline const TextInputCard& GetTextInput() const{ return m_textInput; }
    inline bool TextInputHasBeenSet() const { return m_textInputHasBeenSet; }
    inline void SetTextInput(const TextInputCard& value) { m_textInputHasBeenSet = true; m_textInput = value; }
    inline void SetTextInput(TextInputCard&& value) { m_textInputHasBeenSet = true; m_textInput = std::move(value); }
    inline Card& WithTextInput(const TextInputCard& value) { SetTextInput(value); return *this;}
    inline Card& WithTextInput(TextInputCard&& value) { SetTextInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the query card.</p>
     */
    inline const QQueryCard& GetQQuery() const{ return m_qQuery; }
    inline bool QQueryHasBeenSet() const { return m_qQueryHasBeenSet; }
    inline void SetQQuery(const QQueryCard& value) { m_qQueryHasBeenSet = true; m_qQuery = value; }
    inline void SetQQuery(QQueryCard&& value) { m_qQueryHasBeenSet = true; m_qQuery = std::move(value); }
    inline Card& WithQQuery(const QQueryCard& value) { SetQQuery(value); return *this;}
    inline Card& WithQQuery(QQueryCard&& value) { SetQQuery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the plugin card.</p>
     */
    inline const QPluginCard& GetQPlugin() const{ return m_qPlugin; }
    inline bool QPluginHasBeenSet() const { return m_qPluginHasBeenSet; }
    inline void SetQPlugin(const QPluginCard& value) { m_qPluginHasBeenSet = true; m_qPlugin = value; }
    inline void SetQPlugin(QPluginCard&& value) { m_qPluginHasBeenSet = true; m_qPlugin = std::move(value); }
    inline Card& WithQPlugin(const QPluginCard& value) { SetQPlugin(value); return *this;}
    inline Card& WithQPlugin(QPluginCard&& value) { SetQPlugin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the file upload card.</p>
     */
    inline const FileUploadCard& GetFileUpload() const{ return m_fileUpload; }
    inline bool FileUploadHasBeenSet() const { return m_fileUploadHasBeenSet; }
    inline void SetFileUpload(const FileUploadCard& value) { m_fileUploadHasBeenSet = true; m_fileUpload = value; }
    inline void SetFileUpload(FileUploadCard&& value) { m_fileUploadHasBeenSet = true; m_fileUpload = std::move(value); }
    inline Card& WithFileUpload(const FileUploadCard& value) { SetFileUpload(value); return *this;}
    inline Card& WithFileUpload(FileUploadCard&& value) { SetFileUpload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the properties of the form input card.</p>
     */
    inline const FormInputCard& GetFormInput() const{ return m_formInput; }
    inline bool FormInputHasBeenSet() const { return m_formInputHasBeenSet; }
    inline void SetFormInput(const FormInputCard& value) { m_formInputHasBeenSet = true; m_formInput = value; }
    inline void SetFormInput(FormInputCard&& value) { m_formInputHasBeenSet = true; m_formInput = std::move(value); }
    inline Card& WithFormInput(const FormInputCard& value) { SetFormInput(value); return *this;}
    inline Card& WithFormInput(FormInputCard&& value) { SetFormInput(std::move(value)); return *this;}
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
