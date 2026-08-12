/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class ListGiMinorVersionsRequest : public OdbRequest {
 public:
  AWS_ODB_API ListGiMinorVersionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListGiMinorVersions"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Oracle Grid Infrastructure (GI) major version.</p>
   */
  inline const Aws::String& GetGiVersion() const { return m_giVersion; }
  inline bool GiVersionHasBeenSet() const { return m_giVersionHasBeenSet; }
  template <typename GiVersionT = Aws::String>
  void SetGiVersion(GiVersionT&& value) {
    m_giVersionHasBeenSet = true;
    m_giVersion = std::forward<GiVersionT>(value);
  }
  template <typename GiVersionT = Aws::String>
  ListGiMinorVersionsRequest& WithGiVersion(GiVersionT&& value) {
    SetGiVersion(std::forward<GiVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return for this request. To get the next page
   * of items, make another request with the token returned in the output.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListGiMinorVersionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token returned from a previous paginated request. Pagination continues
   * from the end of the items returned by the previous request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGiMinorVersionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shape family for the GI minor version.</p>
   */
  inline const Aws::String& GetShapeFamily() const { return m_shapeFamily; }
  inline bool ShapeFamilyHasBeenSet() const { return m_shapeFamilyHasBeenSet; }
  template <typename ShapeFamilyT = Aws::String>
  void SetShapeFamily(ShapeFamilyT&& value) {
    m_shapeFamilyHasBeenSet = true;
    m_shapeFamily = std::forward<ShapeFamilyT>(value);
  }
  template <typename ShapeFamilyT = Aws::String>
  ListGiMinorVersionsRequest& WithShapeFamily(ShapeFamilyT&& value) {
    SetShapeFamily(std::forward<ShapeFamilyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone to filter GI minor versions.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  ListGiMinorVersionsRequest& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone ID to filter GI minor versions.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  ListGiMinorVersionsRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_giVersion;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_shapeFamily;

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;
  bool m_giVersionHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_shapeFamilyHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
