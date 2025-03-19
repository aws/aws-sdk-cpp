/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   * <p>The results of the SQL statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/QueryRecords">AWS
   * API Reference</a></p>
   */
  class QueryRecords
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API QueryRecords() = default;
    AWS_REDSHIFTDATAAPISERVICE_API QueryRecords(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API QueryRecords& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The results of the SQL statement in CSV format.</p>
     */
    inline const Aws::String& GetCSVRecords() const { return m_cSVRecords; }
    inline bool CSVRecordsHasBeenSet() const { return m_cSVRecordsHasBeenSet; }
    template<typename CSVRecordsT = Aws::String>
    void SetCSVRecords(CSVRecordsT&& value) { m_cSVRecordsHasBeenSet = true; m_cSVRecords = std::forward<CSVRecordsT>(value); }
    template<typename CSVRecordsT = Aws::String>
    QueryRecords& WithCSVRecords(CSVRecordsT&& value) { SetCSVRecords(std::forward<CSVRecordsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cSVRecords;
    bool m_cSVRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
