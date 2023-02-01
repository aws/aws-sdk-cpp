/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DescribeOfferingRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOfferingRequest">AWS
   * API Reference</a></p>
   */
  class DescribeOfferingRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DescribeOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOffering"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline DescribeOfferingRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline DescribeOfferingRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline DescribeOfferingRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}

  private:

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
