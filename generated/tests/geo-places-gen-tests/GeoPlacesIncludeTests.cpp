/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/geo-places/GeoPlacesClient.h>
#include <aws/geo-places/GeoPlacesEndpointProvider.h>
#include <aws/geo-places/GeoPlacesEndpointRules.h>
#include <aws/geo-places/GeoPlacesErrorMarshaller.h>
#include <aws/geo-places/GeoPlacesErrors.h>
#include <aws/geo-places/GeoPlacesRequest.h>
#include <aws/geo-places/GeoPlacesServiceClientModel.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/AccessPoint.h>
#include <aws/geo-places/model/AccessRestriction.h>
#include <aws/geo-places/model/Address.h>
#include <aws/geo-places/model/AddressComponentMatchScores.h>
#include <aws/geo-places/model/AddressComponentPhonemes.h>
#include <aws/geo-places/model/AutocompleteAdditionalFeature.h>
#include <aws/geo-places/model/AutocompleteAddressHighlights.h>
#include <aws/geo-places/model/AutocompleteFilter.h>
#include <aws/geo-places/model/AutocompleteFilterPlaceType.h>
#include <aws/geo-places/model/AutocompleteHighlights.h>
#include <aws/geo-places/model/AutocompleteIntendedUse.h>
#include <aws/geo-places/model/AutocompleteRequest.h>
#include <aws/geo-places/model/AutocompleteResult.h>
#include <aws/geo-places/model/AutocompleteResultItem.h>
#include <aws/geo-places/model/BusinessChain.h>
#include <aws/geo-places/model/Category.h>
#include <aws/geo-places/model/ComponentMatchScores.h>
#include <aws/geo-places/model/ContactDetails.h>
#include <aws/geo-places/model/Contacts.h>
#include <aws/geo-places/model/Country.h>
#include <aws/geo-places/model/CountryHighlights.h>
#include <aws/geo-places/model/FilterCircle.h>
#include <aws/geo-places/model/FoodType.h>
#include <aws/geo-places/model/GeocodeAdditionalFeature.h>
#include <aws/geo-places/model/GeocodeFilter.h>
#include <aws/geo-places/model/GeocodeFilterPlaceType.h>
#include <aws/geo-places/model/GeocodeIntendedUse.h>
#include <aws/geo-places/model/GeocodeParsedQuery.h>
#include <aws/geo-places/model/GeocodeParsedQueryAddressComponents.h>
#include <aws/geo-places/model/GeocodeQueryComponents.h>
#include <aws/geo-places/model/GeocodeRequest.h>
#include <aws/geo-places/model/GeocodeResult.h>
#include <aws/geo-places/model/GeocodeResultItem.h>
#include <aws/geo-places/model/GetPlaceAdditionalFeature.h>
#include <aws/geo-places/model/GetPlaceIntendedUse.h>
#include <aws/geo-places/model/GetPlaceRequest.h>
#include <aws/geo-places/model/GetPlaceResult.h>
#include <aws/geo-places/model/Highlight.h>
#include <aws/geo-places/model/Intersection.h>
#include <aws/geo-places/model/MatchScoreDetails.h>
#include <aws/geo-places/model/OpeningHours.h>
#include <aws/geo-places/model/OpeningHoursComponents.h>
#include <aws/geo-places/model/ParsedQueryComponent.h>
#include <aws/geo-places/model/ParsedQuerySecondaryAddressComponent.h>
#include <aws/geo-places/model/PhonemeDetails.h>
#include <aws/geo-places/model/PhonemeTranscription.h>
#include <aws/geo-places/model/PlaceType.h>
#include <aws/geo-places/model/PostalAuthority.h>
#include <aws/geo-places/model/PostalCodeDetails.h>
#include <aws/geo-places/model/PostalCodeMode.h>
#include <aws/geo-places/model/PostalCodeType.h>
#include <aws/geo-places/model/QueryRefinement.h>
#include <aws/geo-places/model/QueryType.h>
#include <aws/geo-places/model/RecordTypeCode.h>
#include <aws/geo-places/model/Region.h>
#include <aws/geo-places/model/RegionHighlights.h>
#include <aws/geo-places/model/RelatedPlace.h>
#include <aws/geo-places/model/ReverseGeocodeAdditionalFeature.h>
#include <aws/geo-places/model/ReverseGeocodeFilter.h>
#include <aws/geo-places/model/ReverseGeocodeFilterPlaceType.h>
#include <aws/geo-places/model/ReverseGeocodeIntendedUse.h>
#include <aws/geo-places/model/ReverseGeocodeRequest.h>
#include <aws/geo-places/model/ReverseGeocodeResult.h>
#include <aws/geo-places/model/ReverseGeocodeResultItem.h>
#include <aws/geo-places/model/SearchNearbyAdditionalFeature.h>
#include <aws/geo-places/model/SearchNearbyFilter.h>
#include <aws/geo-places/model/SearchNearbyIntendedUse.h>
#include <aws/geo-places/model/SearchNearbyRequest.h>
#include <aws/geo-places/model/SearchNearbyResult.h>
#include <aws/geo-places/model/SearchNearbyResultItem.h>
#include <aws/geo-places/model/SearchTextAdditionalFeature.h>
#include <aws/geo-places/model/SearchTextFilter.h>
#include <aws/geo-places/model/SearchTextIntendedUse.h>
#include <aws/geo-places/model/SearchTextRequest.h>
#include <aws/geo-places/model/SearchTextResult.h>
#include <aws/geo-places/model/SearchTextResultItem.h>
#include <aws/geo-places/model/SecondaryAddressComponent.h>
#include <aws/geo-places/model/SecondaryAddressComponentMatchScore.h>
#include <aws/geo-places/model/StreetComponents.h>
#include <aws/geo-places/model/SubRegion.h>
#include <aws/geo-places/model/SubRegionHighlights.h>
#include <aws/geo-places/model/SuggestAdditionalFeature.h>
#include <aws/geo-places/model/SuggestAddressHighlights.h>
#include <aws/geo-places/model/SuggestFilter.h>
#include <aws/geo-places/model/SuggestHighlights.h>
#include <aws/geo-places/model/SuggestIntendedUse.h>
#include <aws/geo-places/model/SuggestPlaceResult.h>
#include <aws/geo-places/model/SuggestQueryResult.h>
#include <aws/geo-places/model/SuggestRequest.h>
#include <aws/geo-places/model/SuggestResult.h>
#include <aws/geo-places/model/SuggestResultItem.h>
#include <aws/geo-places/model/SuggestResultItemType.h>
#include <aws/geo-places/model/TimeZone.h>
#include <aws/geo-places/model/TypePlacement.h>
#include <aws/geo-places/model/UspsZip.h>
#include <aws/geo-places/model/UspsZipPlus4.h>
#include <aws/geo-places/model/ValidationException.h>
#include <aws/geo-places/model/ValidationExceptionField.h>
#include <aws/geo-places/model/ValidationExceptionReason.h>
#include <aws/geo-places/model/ZipClassificationCode.h>

using GeoPlacesIncludeTest = ::testing::Test;

TEST_F(GeoPlacesIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::GeoPlaces::GeoPlacesClient>("GeoPlacesIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
