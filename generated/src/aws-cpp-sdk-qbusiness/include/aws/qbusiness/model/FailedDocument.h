/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ErrorDetail.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A list of documents that could not be removed from an Amazon Q index. Each
   * entry contains an error message that indicates why the document couldn't be
   * removed from the index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/FailedDocument">AWS
   * API Reference</a></p>
   */
  class FailedDocument
  {
  public:
    AWS_QBUSINESS_API FailedDocument();
    AWS_QBUSINESS_API FailedDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API FailedDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the Amazon Q data source connector that contains the failed
     * document.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the Amazon Q data source connector that contains the failed
     * document.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q data source connector that contains the failed
     * document.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the Amazon Q data source connector that contains the failed
     * document.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q data source connector that contains the failed
     * document.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q data source connector that contains the failed
     * document.</p>
     */
    inline FailedDocument& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q data source connector that contains the failed
     * document.</p>
     */
    inline FailedDocument& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q data source connector that contains the failed
     * document.</p>
     */
    inline FailedDocument& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline FailedDocument& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>An explanation for why the document couldn't be removed from the index.</p>
     */
    inline FailedDocument& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The identifier of the document that couldn't be removed from the Amazon Q
     * index.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the document that couldn't be removed from the Amazon Q
     * index.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the document that couldn't be removed from the Amazon Q
     * index.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the document that couldn't be removed from the Amazon Q
     * index.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the document that couldn't be removed from the Amazon Q
     * index.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the document that couldn't be removed from the Amazon Q
     * index.</p>
     */
    inline FailedDocument& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the document that couldn't be removed from the Amazon Q
     * index.</p>
     */
    inline FailedDocument& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the document that couldn't be removed from the Amazon Q
     * index.</p>
     */
    inline FailedDocument& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
