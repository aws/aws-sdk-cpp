/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace neptunedata
{
namespace Model
{

  /**
   */
  class GetLoaderJobStatusRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API GetLoaderJobStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLoaderJobStatus"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The load ID of the load job to get the status of.</p>
     */
    inline const Aws::String& GetLoadId() const { return m_loadId; }
    inline bool LoadIdHasBeenSet() const { return m_loadIdHasBeenSet; }
    template<typename LoadIdT = Aws::String>
    void SetLoadId(LoadIdT&& value) { m_loadIdHasBeenSet = true; m_loadId = std::forward<LoadIdT>(value); }
    template<typename LoadIdT = Aws::String>
    GetLoaderJobStatusRequest& WithLoadId(LoadIdT&& value) { SetLoadId(std::forward<LoadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag indicating whether or not to include details beyond the overall status
     * (<code>TRUE</code> or <code>FALSE</code>; the default is
     * <code>FALSE</code>).</p>
     */
    inline bool GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(bool value) { m_detailsHasBeenSet = true; m_details = value; }
    inline GetLoaderJobStatusRequest& WithDetails(bool value) { SetDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag indicating whether or not to include a list of errors encountered
     * (<code>TRUE</code> or <code>FALSE</code>; the default is
     * <code>FALSE</code>).</p> <p>The list of errors is paged. The <code>page</code>
     * and <code>errorsPerPage</code> parameters allow you to page through all the
     * errors.</p>
     */
    inline bool GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    inline void SetErrors(bool value) { m_errorsHasBeenSet = true; m_errors = value; }
    inline GetLoaderJobStatusRequest& WithErrors(bool value) { SetErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error page number (a positive integer; the default is <code>1</code>).
     * Only valid when the <code>errors</code> parameter is set to
     * <code>TRUE</code>.</p>
     */
    inline int GetPage() const { return m_page; }
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }
    inline GetLoaderJobStatusRequest& WithPage(int value) { SetPage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of errors returned in each page (a positive integer; the default
     * is <code>10</code>). Only valid when the <code>errors</code> parameter set to
     * <code>TRUE</code>.</p>
     */
    inline int GetErrorsPerPage() const { return m_errorsPerPage; }
    inline bool ErrorsPerPageHasBeenSet() const { return m_errorsPerPageHasBeenSet; }
    inline void SetErrorsPerPage(int value) { m_errorsPerPageHasBeenSet = true; m_errorsPerPage = value; }
    inline GetLoaderJobStatusRequest& WithErrorsPerPage(int value) { SetErrorsPerPage(value); return *this;}
    ///@}
  private:

    Aws::String m_loadId;
    bool m_loadIdHasBeenSet = false;

    bool m_details{false};
    bool m_detailsHasBeenSet = false;

    bool m_errors{false};
    bool m_errorsHasBeenSet = false;

    int m_page{0};
    bool m_pageHasBeenSet = false;

    int m_errorsPerPage{0};
    bool m_errorsPerPageHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
