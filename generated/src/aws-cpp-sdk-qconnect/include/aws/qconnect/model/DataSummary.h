/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/DataReference.h>
#include <utility>
#include <memory>

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
namespace QConnect
{
namespace Model
{
  class DataDetails;

  /**
   * <p>Summary of the data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DataSummary">AWS
   * API Reference</a></p>
   */
  class DataSummary
  {
  public:
    AWS_QCONNECT_API DataSummary();
    AWS_QCONNECT_API DataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API DataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the data.</p>
     */
    AWS_QCONNECT_API const DataDetails& GetDetails() const;

    /**
     * <p>Details about the data.</p>
     */
    AWS_QCONNECT_API bool DetailsHasBeenSet() const;

    /**
     * <p>Details about the data.</p>
     */
    AWS_QCONNECT_API void SetDetails(const DataDetails& value);

    /**
     * <p>Details about the data.</p>
     */
    AWS_QCONNECT_API void SetDetails(DataDetails&& value);

    /**
     * <p>Details about the data.</p>
     */
    AWS_QCONNECT_API DataSummary& WithDetails(const DataDetails& value);

    /**
     * <p>Details about the data.</p>
     */
    AWS_QCONNECT_API DataSummary& WithDetails(DataDetails&& value);


    /**
     * <p>Reference information about the content.</p>
     */
    inline const DataReference& GetReference() const{ return m_reference; }

    /**
     * <p>Reference information about the content.</p>
     */
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }

    /**
     * <p>Reference information about the content.</p>
     */
    inline void SetReference(const DataReference& value) { m_referenceHasBeenSet = true; m_reference = value; }

    /**
     * <p>Reference information about the content.</p>
     */
    inline void SetReference(DataReference&& value) { m_referenceHasBeenSet = true; m_reference = std::move(value); }

    /**
     * <p>Reference information about the content.</p>
     */
    inline DataSummary& WithReference(const DataReference& value) { SetReference(value); return *this;}

    /**
     * <p>Reference information about the content.</p>
     */
    inline DataSummary& WithReference(DataReference&& value) { SetReference(std::move(value)); return *this;}

  private:

    std::shared_ptr<DataDetails> m_details;
    bool m_detailsHasBeenSet = false;

    DataReference m_reference;
    bool m_referenceHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
